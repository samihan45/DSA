class Solution {
public:
vector<int> largestValues(TreeNode* root) 
{
vector<int> ans;
if(root==NULL)
{
return ans;
}
queue<TreeNode*> q;
q.push(root);
while(q.empty()==false)
{
int size=q.size();
int maxi=INT_MIN;
for(int i=0;i<size;i++)
{
TreeNode* node=q.front();
q.pop();
if(node->val>maxi){
maxi=node->val;
}
if(node->left!=NULL)
{
q.push(node->left);
}
if(node->right!=NULL)
{
q.push(node->right);
}
}
ans.push_back(maxi);
}

return ans;
}
};