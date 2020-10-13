#include<iostream>
#include<string>
using namespace std;
int main(){
    string earth[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
    string mars[13]={"####","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
    int n;
    cin>>n;
    string s;
    getchar();
    while(n--){
        getline(cin,s);
        if(s[0] >= '0' && s[0] <= '9'){
            int num = stoi(s);
            if(num/13){
                cout<<mars[num/13];
            }
            if(num/13 && num%13){
                cout<<" ";
            }
            if(num%13 || num == 0){
                cout<<earth[num%13];
            }  
        }
        else{
            int ge = 0, shi = 0;
            string s1 = s.substr(0,3),s2;
            if(s.length()>4){
                s2 = s.substr(4);
            }
            for(int i = 1; i <= 12;i++){
                if(s1 == earth[i] || s2 == earth[i]){
                    ge = i;
                }
                if(s1 == mars[i]){
                    shi = i;   
                }
            }
            cout<<shi * 13 + ge;
        }
        cout<<endl;
        
    }
    return 0;
}