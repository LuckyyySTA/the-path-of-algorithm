class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string,int> mpA,mpB;
        int j = 0;
        vector<string> arrA,arrB,res;
        for(int i = 0; i < A.length(); i++){
            if(i == A.length() -1){
                arrA.push_back(A.substr(j, A.length()-j));
            }
            if(A[i] == ' '){
                arrA.push_back(A.substr(j, i-j));
                j = i+1;
            }
        }
        j = 0;
        for(int i = 0; i < B.length(); i++){
            if(i == B.length() -1){
                arrB.push_back(B.substr(j, B.length()-j));
            }
            if(B[i] == ' '){
                arrB.push_back(B.substr(j, i-j));
                j = i+1;
            }
        }
        for(int i = 0; i < arrA.size(); i++){
            mpA[arrA[i]]++;
        }
        for(int i = 0; i < arrB.size(); i++){
            mpB[arrB[i]]++;
        }
        for(int i = 0; i < arrB.size(); i++){
            if(mpA[arrB[i]] == 0 && mpB[arrB[i]]==1){
                res.push_back(arrB[i]);
            }
        }
        for(int i = 0; i < arrA.size(); i++){
            if(mpB[arrA[i]] == 0 && mpA[arrA[i]]==1){
                res.push_back(arrA[i]);
            }
        }
        return res;
    }
};