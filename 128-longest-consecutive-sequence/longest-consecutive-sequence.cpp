class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        int ans = 0;

        for (int x : s) {
            if (s.find(x - 1) == s.end()) {
                int cnt = 1;

                while (s.find(x + 1) != s.end()) {
                    x++;
                    cnt++;
                }

                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};