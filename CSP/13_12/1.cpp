#include<iostream>
using namespace std;

int num;
int arr[10001];
int res;

int main(){
    cin>>num;
    while(num--){
        int s;
        cin>> s;
        arr[s]++;        
    }
    int temp = arr[0];
    for(int i = 1; i <= 10000; i++){
        if(arr[i] > temp){
            temp = arr[i];
            res = i;
        }
    }
    cout<<res;    
}