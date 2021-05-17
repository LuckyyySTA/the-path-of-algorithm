#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum, avg, month;
    cin >> sum >> avg >> month;
    double left = 0, right = 500, mid;
    while(left + 0.001 < right){
        mid = left + (right - left)/2;
        double temp = sum;
        for(int i = 0; i < month; i++){
            temp = temp * (1 + mid/100) - avg;
        }
        if(temp > 1e-6){
            right = mid;
        }else{
            left = mid;
        }
    }
    printf("%.1f", mid);
    return 0;
}