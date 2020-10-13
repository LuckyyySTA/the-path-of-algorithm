class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int,int> map;
        for(int i = 0; i < candies.size(); i++){
            map[candies[i]]++;
        }
        int kind = map.size();
        return kind > candies.size()/2 ? candies.size()/2 : kind; 
    }
};