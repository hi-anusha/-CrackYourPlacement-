/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(root==NULL)
            return ans;
        q.push(root);
        
        
        while(!q.empty())
        {
            vector<int> v;
      //      int num=0;
            
           int num=q.size();
           
            while(num--)
            {
                TreeNode* y=q.front();
                q.pop();
                if(y->left)
                q.push(y->left);
                if(y->right)
                q.push(y->right);
                 v.push_back(y->val);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};