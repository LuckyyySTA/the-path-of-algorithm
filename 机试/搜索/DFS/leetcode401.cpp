class Solution {
public:
    vector<int> led = {1,2,4,8,1,2,4,8,16,32};
    vector<string> res;
    void backTrack(int num, int start, pair<int,int>& time){
        if(num == 0){
            if(time.first > 11 || time.second > 59){
                return;
            }
            string hour = to_string(time.first);
            string min = to_string(time.second);
            if(min.size() == 1){
                min.insert(0, "0");
            }
            res.push_back(hour+":"+min);
            return;
        }
        for(int i = start; i < 10; i++){
            if(time.first > 11 || time.second > 59){
                continue;
            }
            pair<int, int> store = time;
            if(i < 4){
                time.first += led[i];
            }else{
                time.second += led[i];
            }
            backTrack(num - 1, i + 1, time);
            time = store;
        }
        return;    
    }
    vector<string> readBinaryWatch(int num) {
        pair<int, int> time(0, 0);
        backTrack(num, 0, time);
        return res;
    }
};