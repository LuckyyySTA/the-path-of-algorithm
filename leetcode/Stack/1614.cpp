class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int num = 0, res = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                num++;
                res = max(num, res);
                st.push(s[i]);
            }else if(s[i] == ')'){
                st.pop();
                num--;
            }
        }
        return res;
    }
};