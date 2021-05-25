#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll num = 0;
int main(){
    string s;
    cin >> s;
    stack<int> st;
    for(ll i = 0; s[i] != '@'; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            num = num * 10 + s[i]-'0';
        }else if(s[i] == '.'){
            st.push(num);
            num = 0;
        }else if(s[i] == '-'){
                ll num1, num2;
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num2 - num1);
            }else if(s[i] == '*'){
                ll num1, num2;
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num2 * num1);
            }else if(s[i] == '+'){
                ll num1, num2;
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num2 + num1);
            }else if(s[i] == '/'){
                ll num1, num2;
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num2/num1);
            }
        }
        if(st.empty()){
            cout<<0;
        }else
            cout<<st.top();
    return 0;
    }