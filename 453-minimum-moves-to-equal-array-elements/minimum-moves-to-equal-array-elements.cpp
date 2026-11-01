class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = nums[0];
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + (nums[i] - mini);
        }

        return sum;
    }
};