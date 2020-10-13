#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string a,b,s;
    getline(cin,a);
    getline(cin,b);
    s = a + b;
    unordered_map<char,int> map; 
    for(int i = 0; i < s.length(); i++){
        if(map[s[i]] == 0){
            cout<<s[i];
        }
        map[s[i]] = 1;
    }
    return 0;
}