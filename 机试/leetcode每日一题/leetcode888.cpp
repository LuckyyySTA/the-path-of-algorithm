class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mapA;
        int sumA = 0, sumB = 0;
        vector<int> res;
        for(int i = 0; i < A.size(); i++){
            sumA += A[i];
            mapA[A[i]] = i;
        }
        for(int i = 0; i < B.size(); i++){
            sumB += B[i];
        }
        for(int i = 0; i < B.size(); i++){
            int temp = (sumA - sumB)/2 + B[i];
            unordered_map<int,int>::iterator iter = mapA.find(temp);
            if(iter != mapA.end()){
                res.push_back(temp);
                res.push_back(B[i]);
                break;
            }
        }
        return res;
    }
};