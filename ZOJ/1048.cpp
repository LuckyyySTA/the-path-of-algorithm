#include<iostream>
using namespace std;
int main(){
    double sum = 0;
    for(int i = 0; i < 12; i++){
        float num;
        cin>>num;
        sum += num;
    }
    printf("$%.2f", sum/12);
    return 0;
}