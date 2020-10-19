class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> st1,st2;
        for(int i = 0; i < S.length(); i++){
            if(S[i] == '#'){
                if(!st1.empty()){
                    st1.pop();
                }
            }else{
                st1.push(S[i]);
            }
        }
        for(int j = 0; j < T.length(); j++){
            if(T[j] == '#'){
                if(!st2.empty()){
                    st2.pop();
                }
            }else{
                st2.push(T[j]);
            }
        }
        return st1 == st2;
    }
};