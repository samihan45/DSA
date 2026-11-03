class Solution {
public:

TreeNode* build(vector<int>& inorder, vector<int>& postorder,
int& index, int start, int end) {

 if (start > end)
{
 return NULL;
}

int value = postorder[index];
index--;

TreeNode* root = new TreeNode(value);

int pos = start;

for (int i = start; i <= end; i++) {
if (inorder[i] == value) {
pos = i;
break;
}
}

root->right = build( inorder, postorder , index, pos + 1, end); // POS 
root->left = build(inorder, postorder,  index, start, pos - 1 );

return root;
  }

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

int index = postorder.size() - 1;

return build(inorder, postorder, index, 0, inorder.size() - 1);
    }
};