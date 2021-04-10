#include<iostream>
using namespace std;
int arr[5];
bool includeSeven(int num){
    string s;
    s = to_string(num);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '7'){
            return true;
        }
    }
    return false;
}
int main(){
    int n, i, count = 1;
    cin>>n;
    for(i = 1; count <= n; i++){
        if(i%7 == 0 || includeSeven(i)){
            arr[i%4]++;
            continue;
        }
        count++;
    }
    arr[4] = arr[0]; 
    for(int i = 1; i < 5; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}