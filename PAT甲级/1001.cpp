#include<iostream>
using namespace std;
int main(){
    long long int a,b;
    cin>>a>>b;
    string str = to_string(a+b);
    for(int i = 0; i < str.length(); i++){
        cout<<str[i];
        if(str[i] == '-'){
            continue;
        }
        if((i+1)%3 == str.length() % 3 && i != str.length() - 1){
            cout<<",";
        }
    }
    
    return 0;
}