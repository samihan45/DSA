class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int count[26] = {0};

        int left = 0;
        int ans = 0;
        int maxcount = 0;

        for (int right = 0; right < n; right++) {
            count[s[right] - 'A']++;

            if (count[s[right] - 'A'] > maxcount) {
                maxcount = count[s[right] - 'A'];
            }

            while ((right - left + 1) - maxcount > k) {
                count[s[left] - 'A']--;
                left++;
            }

            int len = right - left + 1;

            if (len > ans) {
                ans = len;
            }
        }

        return ans;
    }
};