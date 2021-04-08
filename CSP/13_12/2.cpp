#include<iostream>
using namespace std;

string s;

int main(){
    cin>>s;
    int res = 0;
    string wrong;
    int index = 1;
    for(int i = 0; i < s.length() - 1; i++){
        wrong += s[i];
        if(s[i] == '-'){
            continue;
        }
        res += (s[i] - '0')*index;
        index++;
    }
    int mod = res%11;
    if((s[s.length() - 1] == 'X' && mod == 10)||s[s.length() - 1] - '0' == mod){
        cout<<"Right";
    }else{
        if(mod == 10){
            wrong += 'X';
        }else{
            wrong += (mod+'0');
        }
        cout<<wrong;
    }
}