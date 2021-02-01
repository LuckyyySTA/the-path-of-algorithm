#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    const float PI_100 = 0.031426535;
    for(int i = 0; i < n; i++){
        float x,y;
        cin>>x>>y;
        int year;
        year = PI_100 * ((x * x) + (y * y)) + 1;
        cout<<"Property "<< i+1<<": ";
        cout<<"This property will begin eroding in year "<<year<<"."<<endl;
        
    }
    cout<<"END OF OUTPUT.";
    return 0;
}