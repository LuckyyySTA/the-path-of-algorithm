#include<iostream>
using namespace std;
int main(){
    float c[1001] = {0};
    int m, n, t;
    float num;
    scanf("%d",&m);
    while(m--){
        scanf("%d%f",&t,&num);
        c[t] += num;
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d%f",&t,&num);
        c[t] += num;
    }
    int count = 0;
    for(int i = 0; i < 1001; i++){
        if(c[i]!=0){
            count++;
        }
    }
    printf("%d",count);
    for(int i = 1000; i >= 0; i--){
        if(c[i] != 0.0)
            printf(" %d %.1f",i,c[i]);
    }
    return 0;
}