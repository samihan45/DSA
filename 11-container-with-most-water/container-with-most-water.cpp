class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxwater = 0;

        while (left < right) {
            int h;

            if (height[left] < height[right]) {
                h = height[left];
            }
            else {
                h = height[right];
            }

            int width = right - left;
            int water = h * width;

            if (water > maxwater) {
                maxwater = water;
            }

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxwater;

        // approach 2
    }
};