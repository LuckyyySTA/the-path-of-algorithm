#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int jia = 0, yi = 0;
    while(N--){
        int a, b, resA, resB;
        cin>>a>>resA>>b>>resB;
        if(resA == a + b && resB != a + b){
            jia++;
        }
        if(resB == a + b && resA != a + b){
            yi++;
        }
    }
    cout<<yi<<" "<<jia;
    return 0;
}