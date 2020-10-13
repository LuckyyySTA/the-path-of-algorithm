#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    string wrong,str;
    getline(cin,wrong);
    getline(cin,str);
    unordered_map<char,bool> map;
    for(int i = 0; i < wrong.length(); i++){
        if(wrong[i] >= 'A' && wrong[i] <= 'Z'){
            map[wrong[i]+32] = true;
        }
        map[wrong[i]] = true;
    }
    for(int i = 0; i < str.length(); i++){
        if(map['+'] && str[i]>='A' && str[i] <= 'Z'){
            continue;
        }
        if(map[str[i]]){
            continue;
        }
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}