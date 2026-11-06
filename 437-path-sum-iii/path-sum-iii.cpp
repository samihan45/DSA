class Solution {
public:

int countFrom(TreeNode* root, long long targetSum){

if(root==NULL){
return 0 ;
}

int count=0 ;

if(root->val == targetSum){
count++;
}

count = count+countFrom(root->left,targetSum-root->val);
count = count+countFrom(root->right,targetSum-root->val);

return count;
}

int pathSum(TreeNode* root, int targetSum) {

if(root==NULL){
return 0;
}

int count=countFrom (root,targetSum) ;

count = count+pathSum(root->left ,targetSum) ;
count = count+pathSum (root->right,targetSum) ;

return count ;
}
} ;