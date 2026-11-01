class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {

        if (root1 == NULL && root2 == NULL) {
            return NULL;
        }

        if (root1 == NULL) {
            return root2;
        }

        if (root2 == NULL) {
            return root1;
        }

        int sum = root1->val + root2->val;
        root1->val = sum;

        TreeNode* left = mergeTrees(root1->left, root2->left);
        TreeNode* right = mergeTrees(root1->right, root2->right);

        root1->left = left;
        root1->right = right;

        return root1;
    }
};