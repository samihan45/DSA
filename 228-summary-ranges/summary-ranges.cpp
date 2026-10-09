class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int i=0;

        while(i<nums.size()) {
            int a=nums[i];

            while(i+1<nums.size() && nums[i+1]==nums[i]+1)
                i++;

            int b=nums[i];

            if(a==b)
                ans.push_back(to_string(a));
            else
                ans.push_back(to_string(a)+"->"+to_string(b));

            i++;
        }

        return ans;
    }
};