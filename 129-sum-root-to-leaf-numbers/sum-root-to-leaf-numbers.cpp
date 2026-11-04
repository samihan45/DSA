class Solution {
public:
int solve(TreeNode* root, int sum){

if(root == NULL)
{
  return 0;
      }
sum = sum * 10 + root->val;

if(root->left == NULL && root->right == NULL )

{
return sum;
 }

int left = solve (root->left,sum);
int right = solve (root->right,sum) ;

return left + right;
  }

int sumNumbers(TreeNode* root)

{

return solve(root, 0);

    }
};