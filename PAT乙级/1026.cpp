#include<iostream>
using namespace std;
int main(){
    long long int a,b;
    cin>>a>>b;
    int res = (b - a + 50)/100;
    int hour=0,min=0,sec=0;
    hour = res/3600;
    res = res%3600;
    min = res/60;
    sec = res%60;
    printf("%02d:%02d:%02d",hour,min,sec);
    return 0;
}