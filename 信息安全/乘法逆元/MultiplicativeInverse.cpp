#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL extend_gcd(LL a, LL b,LL &x,LL &y) {
    if(b==0) {
        x=1;
        y=0;
        return a;
    } else {
        int r = extend_gcd(b,a%b,x,y);
        int t=x;
        x=y;
        y=t-(a/b)*y;
        return r;
    }
}

int main() {
        /**
            乘法逆元
        */
        LL a, b, x, y;
        cout << "求a关于模b的乘法逆元" << endl;
        cout << "请输入a" << endl;
        cin >> a;
        cout << "请输入b" << endl;
        cin >> b;
        if(b%a == 0){
            cout<< a<<"与"<<b<<"不互素，乘法逆元不存在"<<endl;
            system("pause");
            return 0;
        }
        LL temp = a, mod = b; 
        extend_gcd(a, b, x, y);
        x = (x%b+b)%b;
        cout<< temp << "关于模" << mod << "的乘法逆元为："<< x <<endl;
        system("pause");
        return 0;
}