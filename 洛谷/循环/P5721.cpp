#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int index = n*(n+1)/2;
    int count = n;
    for(int i = 1; i <= index; i++){
        n--;
        printf("%02d", i);
        if(n == 0){
            cout<<endl;
            n = --count;
        }
    }
    return 0;
}