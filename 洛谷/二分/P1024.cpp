#include<bits/stdc++.h>
using namespace std;

double a, b, c, d;
double func(double x){
    return a*x*x*x + b*x*x + c*x + d;
}
int main(){
    cin >> a >> b >> c >> d;
    int cnt = 0;
    for(int i = -100; i < 100; i++){
        double left = i;
        double right = i+1;
        double x1 = func(left);
        double x2 = func(right);
        // cout<<x1 << " "<<x2<<left<<endl;
        if(x1 == 0){
            printf("%.2f ", left);
            cnt++;
        }
        if(x1 * x2 < 0){
            while(left + 0.001 < right){
                double mid = left + (right - left)/2;
                if(func(mid) * func(right) <= 0){
                    left = mid;
                }else{
                    right = mid;
                }
            }
            printf("%.2f ", left);
            cnt++;
        }
        if(cnt == 3){
            break;
        }
    }
    return 0;
}