//求个十百位
//num%10：个位 num/10 %10 十位 num/100 %10 百位
#include<iostream>
using namespace std;
int main(){
    int num,i=0;
    cin>>num;
    int arr[3]={0};
    while(num!=0){
        arr[i++] = num%10;
        num = num/10;
    }
    for(int i=0;i<arr[2];i++){
        cout<<"B";
    }
    for(int i=0;i<arr[1];i++){
        cout<<"S";
    }
    for(int i=0;i<arr[0];i++){
        cout<<i+1;
    }
    return 0;
}