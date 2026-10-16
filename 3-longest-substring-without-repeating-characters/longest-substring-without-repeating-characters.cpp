class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0, r = 0, ans = 0;
        int a[256] = {0};

        while (r < n) {
            if (a[s[r]] == 0) {
                a[s[r]] = 1;
                ans = max(ans, r - l + 1);
                r++;
            } else {
                a[s[l]] = 0;
                l++;
            }
        }

        return ans;
    }
};