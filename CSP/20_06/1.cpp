#include<iostream>
using namespace std;
struct point{
    int x, y;
    char type;
};
point point[1001];
int flagA;
int flagB;
int main(){
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>point[i].x>>point[i].y>>point[i].type;
    }
    int flagA = -1, flagB = -1;
    for(int i = 0; i < m; i++){
        int a0, a1, a2;
        cin>>a0>>a1>>a2;
        int indexA = 0, indexB = 0, res = 1;
        for(int j = 0; j < n; j++){
            if(point[j].type == 'A'){
                indexA++;
                if(indexA == 1){
                    flagA = a0 + a1 * point[j].x + a2 * point[j].y > 0 ? 1 : 0;
                    // cout<<"A:"<<flagA<<endl;
                }
                else{
                int temp = a0 + a1 * point[j].x + a2 * point[j].y > 0 ? 1 : 0;
                    if(temp != flagA){
                        cout<<"No"<<endl;
                        res = 0;
                        break;
                    }
                }
                
            }
            if(point[j].type == 'B'){
                indexB++;
                if(indexB == 1){
                    flagB = a0 + a1 * point[j].x + a2 * point[j].y > 0 ? 1 : 0;
                    // cout<<"B:"<<flagB<<endl;
                }
                else{
                int temp = a0 + a1 * point[j].x + a2 * point[j].y > 0 ? 1 : 0;
                    if(temp != flagB){
                        cout<<"No"<<endl;
                        res = 0;
                        break;
                    }
                }
            }
            
        }
        if(flagA != flagB && res){
            cout<<"Yes"<<endl;
        }
    }
}