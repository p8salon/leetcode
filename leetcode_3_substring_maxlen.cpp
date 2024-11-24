class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = -1;
        int res = 0;
        char loop_up[255] = {0};

        while (l < s.size()) {
            if ((r + 1 < s.size()) && !loop_up[s[r+1]]) {
                loop_up[s[++r]]++;
            }
            else {
                loop_up[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
        }

        return res;
    }
};