class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1;
        int r = nums.size() - 1;

        while (l < r) {
            int mid = (l + r) / 2;
            int cnt = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] <= mid) {
                    cnt++;
                }
            }

            if (cnt > mid) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }

        return l;

        // Floyd's algorithm used , approach  2 
    }
};