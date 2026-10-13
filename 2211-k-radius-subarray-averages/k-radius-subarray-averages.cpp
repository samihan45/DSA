class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n, -1);
        long long sum = 0;
        int len = 2*k + 1;

        if(len > n) return ans;

        for(int i = 0; i < len; i++)
            sum += nums[i];

        ans[k] = sum / len;

        for(int i = len; i < n; i++) {
            sum = sum - nums[i-len] + nums[i];
            ans[i-k] = sum / len;
        }

        return ans;
    }
};