#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string str;
    char temp;
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        temp = tolower(s[i]);
        if(temp >= 'a' && temp <= 'z')
            sum += temp - 'a' + 1;
    }
    int zero = 0, one = 0;
    while(sum!=0){
        if(sum%2 == 1){
            one++;
        }else{
            zero++;
        }
        sum /= 2;
    }
    cout<<zero<<" "<<one;
    return 0;
}