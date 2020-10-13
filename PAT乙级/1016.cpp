#include<iostream>
using namespace std;
int main(){
    string a,b;
    int Da,Db;
    cin>>a>>Da>>b>>Db;
    int sumA=0,sumB=0;
    for(int i=0;i<a.length();i++){
        if(a[i]-'0'==Da){
            sumA = 10*sumA + Da;
        }
    }
    for(int i=0;i<b.length();i++){
        if(b[i]-'0'==Db){
            sumB = 10*sumB + Db;
        }
    }
   cout<<sumA+sumB;
   return 0; 
}