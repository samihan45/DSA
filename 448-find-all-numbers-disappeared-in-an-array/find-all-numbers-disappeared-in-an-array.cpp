class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> seen(nums.size()+1, 0);

        for(int i=0;i<nums.size();i++)
            seen[nums[i]]=1;

        for(int i=1;i<=nums.size();i++) {
            if(seen[i]==0)
                ans.push_back(i);
        }

        return ans;

        // returned array
    }
};