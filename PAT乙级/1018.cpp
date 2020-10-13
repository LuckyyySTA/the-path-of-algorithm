#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int jiawin=0,yiwin=0,jia[3]={0},yi[3]={0};
    for(int i=0;i<num;i++){
        char a,b;
        cin>>a>>b;
        if(a=='C' && b=='J'){
            jiawin++;
            jia[1]++;
        }else if(a=='J' && b=='B'){
            jiawin++;
            jia[2]++;
        }else if(a=='B' && b=='C'){
            jiawin++;
            jia[0]++;
        }else if(a=='J' && b=='C'){
            yiwin++;
            yi[1]++;
        }else if(a=='B' && b=='J'){
            yiwin++;
            yi[2]++;
        }else if(a=='C' && b=='B'){
            yiwin++;
            yi[0]++;
        }
    }
        cout<<jiawin<<" "<<num - jiawin - yiwin<<" "<<yiwin<<endl;
        cout<<yiwin<<" "<<num - jiawin - yiwin<<" "<<jiawin<<endl;
        int maxA = jia[0], maxB = yi[0],flagA=0,flagB=0;
        for(int i=1;i<3;i++){
            if(maxA<jia[i]){
                maxA = jia[i];
                flagA = i;
            }
            if(maxB<yi[i]){
                maxB = yi[i];
                flagB = i;
            }
        }
        string str = "BCJ";
        cout<<str[flagA]<<" "<<str[flagB];
    return 0;
}