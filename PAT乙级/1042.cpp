#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int map[26]={0};
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i < s.length(); i++){
        if(islower(s[i]))
            map[s[i] - 'a']++;
    }
    int max = map[0],index;
    for(int i =1; i < 26; i++){
        if(map[i]  > max){
            max = map[i];
            index = i;
        }
    }
    printf("%c %d", index + 'a', max);
    return 0;
}