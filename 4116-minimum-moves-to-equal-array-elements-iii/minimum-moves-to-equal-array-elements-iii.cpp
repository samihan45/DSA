class Solution {
public:
    int minMoves(vector<int>& nums)
    
     {
        int maxi = nums[0];

        for (int i = 0; i < nums.size(); i++ )
        
         {
            if (nums[i] > maxi) 
            
            {
                maxi = nums[i];
            }
        }

        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        
         {
            sum = sum + (maxi-nums[i]);
        }

        return sum;
    }
};