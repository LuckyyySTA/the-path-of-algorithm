#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> vec;
    while(N--){
        int num;
        cin>>num;
        vec.push_back(num);
    }   
    int sum = 0;
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec.size(); j++){
            if(i != j){
                sum += vec[i]*10 + vec[j];
            }
        }
    }
    cout<<sum;
    return 0;
}