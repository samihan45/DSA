class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
     {

     vector<vector<int>> ans;

        if (root == NULL) 
        {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        int flag = 0;

        while (q.empty() == false)
         {

            int size = q.size();
            vector<int> temp;

            for (int i = 0; i < size; i++) 
            {

                TreeNode* node = q.front();
                q.pop();

                temp.push_back(node->val);

                if (node->left != NULL)
                 {
                    q.push(node->left);
                }

                if (node->right != NULL) 
                {
                    q.push(node->right);
                }
            }

            if (flag == 1) 
            {
                reverse(temp.begin(), temp.end());
            }

            ans.push_back(temp);

            if (flag == 0)
             {
                flag = 1;
            }
            else 
            {
                flag = 0;
            }
        }

        return ans;
    }
};