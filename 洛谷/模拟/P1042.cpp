#include<bits/stdc++.h>
using namespace std;
const int MAX = 65535;
int arr[MAX] = {0};
char ch;
int main(){
    for(int i = 1;cin >> ch && ch != 'E'; i++){
        if(ch == 'W'){
            arr[i] = 1;
        }
        if(ch == 'L'){
            arr[i] = 2;
        }
    }
    int w = 0, l = 0;
    for(int i = 1; 1; i++){
        if(arr[i] == 1){
            w++;
        }
        if(arr[i] == 2){
            l++;
        }
        if(arr[i] == 0){
            cout<< w << ":" << l<<endl;
            break;
        }
        if(w - l >= 2 || l - w >= 2){
            if(w >= 11 || l >= 11){
                cout<< w << ":"<< l << endl;
                w = 0;
                l = 0;
            }
        }
    }
    cout<< endl;
    w = l = 0;
    for(int i = 1; 1; i++){
        if(arr[i] == 1){
            w++;
        }
        if(arr[i] == 2){
            l++;
        }
        if(arr[i] == 0){
            cout<< w << ":" << l<<endl;
            break;
        }
        if(w - l >= 2 || l - w >= 2){
            if(w >= 21 || l >= 21){
                cout<< w << ":"<< l << endl;
                w = 0;
                l = 0;
            }
        }
    }
    return 0;
}