#include<bits/stdc++.h>
using namespace std;
int k, n; 
int main(){
    cin >> n >> k;
    int countA = 0, countB = 0;
    double resA = 0, resB = 0;
    for(int i = 1; i <= n; i++){
        if(i%k == 0){
            resA += i;
            countA++;
        }else{
            resB += i;
            countB++;
        }
    }
    resA = resA/countA;
    resB = resB/countB;
    printf("%.1f %.1f", resA, resB);
    return 0;
}