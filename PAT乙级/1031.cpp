#include<iostream> 
using namespace std;
int main(){
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'}; 
    int n,flag = 0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int sum = 0;
        for(int i = 0; i < s.length()-1; i++){
            sum += (s[i]-'0')*weight[i];
        }
        if(M[sum%11] != s[s.length()-1]){
            flag = 1;
            cout<<s<<endl;
        }
    }
    if(flag == 0){
        cout<<"All passed";
    }
    return 0;
}