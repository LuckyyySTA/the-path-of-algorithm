#include<bits/stdc++.h>
using namespace std;
int main(){
    int p1, p2, p3;
    cin >> p1 >> p2 >>p3;
    string s;
    cin >> s;
    string ans;
    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '1' && s[i] <= '9')){
            ans+=s[i];
        }
        if(s[i] == '-'){
            char left = s[i-1];
            char right = s[i+1];
            if(((left >= 'a' && left <= 'z') && (right >= 'a' && right <= 'z')) || ((left >= '1' && left <= '9') && (right >= '1' && right <= '9'))){
                if(left == right || left > right){
                ans += s[i];
                }
                else if((right - '0') - (left - '0') == 1){
                continue;
                }
                else{
                    if(p3 == 1){
                        for(int i = (left - '0'); i < (right - '0') - 1; i++){
                            for(int j = 0; j < p2; j++){
                                if(p1 == 1)
                                    ans += (left + i -(left - '0') + 1);
                                else if(p1 == 2){
                                    ans += (left + i -(left - '0') + 1 + 'A' - 'a');
                                }else if(p1 == 3){
                                        ans += '*'; 
                                    }
                            }
                        }
                    }
                        else if(p3 == 2){
                    for(int i = (right - '0') - 2; i > (left - '0') - 1; i--){
                        for(int j = 0; j < p2; j++){
                            if(p1 == 1)
                                ans += (left + i -(left - '0') + 1);
                            else if(p1 == 2){
                                ans += (left + i -(left - '0') + 1 + 'A' - 'a');
                            }else if(p1 == 3){
                                ans += '*';
                            }
                        }
                    }   
                }
                }
                
            }
            else ans += s[i];
            }
        }
    cout<<ans;
    return 0;
}