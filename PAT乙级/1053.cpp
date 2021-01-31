#include<iostream>
using namespace std;
int main(){
    int N, D;
    float e;
    cin>>N >> e >> D;
    double maybeEmpty = 0, Empty = 0;
    int num = N;
    while(N--){
        int k;
        cin>>k;
        int count = 0;
        for(int i = 0; i < k; i++){
            float E;
            cin>>E;
            if(E < e){
                count++;
            }
        }
        if(count > k/2){
            maybeEmpty++;
        }
        if(count > k/2 && k > D){
            Empty++;
        }
    }
    // cout<<maybeEmpty<<" "<<Empty<< " "<<num<<endl;
    printf("%.1f%% %.1f%%", ((maybeEmpty-Empty)*100)/num , (Empty*100)/num);
    return 0;
}