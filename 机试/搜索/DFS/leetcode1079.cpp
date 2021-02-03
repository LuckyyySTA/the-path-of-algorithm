class Solution {
public:
    int res = 0;
    void backTrack(string tiles, vector<bool>& used){
        for(int i = 0; i < tiles.length(); i++){
            if(i > 0 && tiles[i] == tiles[i - 1] && used[i - 1] == false){
                continue;
            }
            if(used[i] == false){
                used[i] = true;
                res++;
                backTrack(tiles, used);
                used[i] = false;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        vector<bool> used(tiles.length(), false);
        sort(tiles.begin(), tiles.end());
        backTrack(tiles, used);
        return res;
    }
};