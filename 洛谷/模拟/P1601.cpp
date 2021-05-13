#include<bits/stdc++.h>
using namespace std;
int a[10001], b[10001], c[10001];

int main(){
    string a1, b1;
    cin >> a1 >> b1;
    int lena = a1.length();
    int lenb = b1.length();
    for(int i = 1; i <= lena; i++){
        a[i] = a1[lena - i] - '0';
    }
    for(int j = 1; j <= lenb; j++){
        b[j] = b1[lenb - j] - '0';
    }
    for(int i = 1; i < lena+lenb; i++){
        c[i] = a[i] + b[i];
    }
    for(int i = 1; i  < lena+lenb; i++){
        if(c[i] > 9){
            c[i+1] += c[i]/10;
            c[i] = c[i]%10;
        }
    }
    
    int index = 0;
    for(int i = lena+lenb; i > 0; i--){
        if(c[i] == 0 && i > 1){
            continue;
        }else{
            index = i;
            break;
        }
    }
    for(int i = index; i > 0; i--){
        cout<<c[i];
    }
}