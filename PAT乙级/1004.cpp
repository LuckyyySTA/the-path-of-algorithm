#include<iostream>
using namespace std;
int main(){
    int n,min=101,max=-1;
    string minName,maxName,minID,maxID;
    cin>> n;
    for(int i=0;i<n;i++){
        int score;
        string name,id;
        cin>>name>>id>>score;
        if(max<score){
            max = score;
            maxName = name;
            maxID = id;
        }
        if(min>score){
            min = score;
            minName = name;
            minID = id;
        }
    }
    cout<<maxName<<" "<<maxID<<endl;
    cout<<minName<<" "<<minID;
    return 0;
}