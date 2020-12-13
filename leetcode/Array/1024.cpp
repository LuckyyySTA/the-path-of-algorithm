class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int T) {
        sort(clips.begin(), clips.end());
        int ans = 1;

        int end = 0;
        int next = 0;
        for (auto c : clips) {
            if (c[0] > end) {
                if (next >= T) break;
                ans++;
                end = next;
                if (c[0] > end) return -1;
            }
            next = max(next, c[1]);
        }
        return (next < T) ? -1 : ans;
    }
};
