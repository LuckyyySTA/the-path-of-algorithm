class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        set<int> times;
        for(int i = 0; i < arr.size(); i++){
            map[arr[i]]++;
        }
        for(auto pair : map){
            times.insert(pair.second);
        }
        return times.size() == map.size();

    }
};