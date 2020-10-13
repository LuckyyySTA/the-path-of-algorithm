class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        set<int> times;
        for(auto p: mp){
            times.insert(p.second);
        }
        return times.size() == mp.size();
    }
};