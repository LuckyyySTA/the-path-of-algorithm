#include<iostream>
using namespace std;
struct s{
    int x,y;
};
s s[1001];
int res[5];
int main(){
    int n;
    cin>>n;
    int count, score;
    for(int i = 0; i < n; i++){
        cin>>s[i].x>>s[i].y;
    }
    for(int i = 0; i < n; i++){
        count = 0, score = 0;
        for(int j = 0; j < n; j++){
            if(s[i].x == s[j].x+1 && s[i].y == s[j].y){
                count++;
            }
            if(s[i].x == s[j].x-1 && s[i].y == s[j].y){
                count++;
            }
            if(s[i].x == s[j].x && s[i].y == s[j].y+1){
                count++;
            }
            if(s[i].x == s[j].x && s[i].y == s[j].y-1){
                count++;
            }
            if(s[i].x == s[j].x+1 && s[i].y == s[j].y+1){
                score++;
            }
            if(s[i].x == s[j].x+1 && s[i].y == s[j].y-1){
                score++;
            }
            if(s[i].x == s[j].x-1 && s[i].y == s[j].y+1){
                score++;
            }
            if(s[i].x == s[j].x-1 && s[i].y == s[j].y-1){
                score++;
            }
        }
        if(count == 4)
            res[score]++;
    }
    for(int i = 0; i < 5; i++){
        cout<<res[i]<<endl;
    }
}