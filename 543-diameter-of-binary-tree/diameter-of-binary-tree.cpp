class Solution {
public:
int maxi = 0;

int height(TreeNode* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int sum = left + right;

    if(sum > maxi)
    
    {
        maxi = sum;
    }

    if(left > right)
    {
        return left + 1;
    }
    else
    {
        return right + 1;
    }
}

int diameterOfBinaryTree(TreeNode* root)
{
    height(root);
    return maxi;
}
};