#include<bits/stdc++.h>
using namespace std;

int arr[101];
int n;
int main(){
    cin >> n;
    int index = n;
    for(int i = 0; i < n + 1; i++){
        cin >> arr[i];
    }
    int first = 0;
    for(int i = 0; i < n + 1; i++){
        if(arr[i] == 0){
            index--;
            continue;
        }
        if(first == 0){
            //第一次输出 正数不带+
            if(index != 0){
                if(index != 1){//多项式系数不为1
                    if(arr[i] == 1){//如果系数是1 则不输出
                        cout<<"x^"<<index;
                    }else if(arr[i] == -1){
                        cout<<"-x^"<<index;
                    }
                    else{
                        cout<<arr[i]<<"x^"<<index;
                    }
                }
                if(index == 1){
                   if(arr[i] == 1){//如果系数是1 则不输出
                        cout<<"x";
                    }else if(arr[i] == -1){
                        cout<<"-x";
                    }
                    else{
                        cout<<arr[i]<<"x";
                    } 
                }
            }
            if(index == 0){
                cout<<arr[i];
            }
            first++;
            index--;
        }else{  // 不是第一次输出
            if(index != 0 && index != 1){//多项式指数不为0
                if(arr[i] > 0){
                    cout<<"+";
                }
                if(arr[i] == 1){
                    cout<<"x^"<<index;
                }
                else if(arr[i] == -1){
                    cout<<"-x^"<<index;
                }else{
                    cout<<arr[i]<<"x^"<<index;
                }
                index--;
            }else if(index == 0){// 多项式指数为0
                if(arr[i] > 0){
                    cout<<"+";
                }
                cout<<arr[i];
            }else{
                if(arr[i] > 0){
                    cout<<"+";
                }
                if(arr[i] == 1){
                    cout<<"x";
                }
                else if(arr[i] == -1){
                    cout<<"-x";
                }else{
                    cout<<arr[i]<<"x";
                }
                index--;
            }
        }
        

    }
    return 0;
}