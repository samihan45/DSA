class Solution {
public:

vector<vector<int>> ans;

void solve(TreeNode* root, int targetSum, vector<int>& temp){

if(root == NULL)
{
return;
}
temp.push_back(root->val);

targetSum = targetSum - root->val;

if(root->left == NULL && root->right == NULL){

if(targetSum == 0){
ans.push_back(temp);
 }
}

solve(root->left, targetSum, temp);
 solve(root->right, targetSum, temp);

temp.pop_back();
  }

 vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

vector<int> temp;

solve(root, targetSum, temp);

return ans;
}
};