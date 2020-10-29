class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> temp;
        unordered_map<int,int> map;
        int res = 0;
        for(int i = 0; i < arr.size(); i++){
            map[arr[i]]++;
        }
        for(unordered_map<int,int>::iterator it = map.begin(); it!=map.end(); it++){
            temp.push_back(it->second);
        }
        sort(temp.begin(), temp.end());
        int len = 0;
        for(int i = temp.size() - 1; i >= 0; i--){
            len += temp[i];
            res++;
            if(len >= arr.size()/2)
                break;
        }
        return res;
    }
};