class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        if (root == NULL) {
            return false;
        }

        if (root->left == NULL && root->right == NULL) {
            if (root->val == targetSum) {
                return true;
            }
            else {
                return false;
            }
        }

        int sum = targetSum - root->val;

        bool left = hasPathSum(root->left, sum);
        bool right = hasPathSum(root->right, sum);

        if (left == true || right == true) {
            return true;
        }
        else {
            return false;
        }
    }
};