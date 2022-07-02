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
class Solution 
{
public:
    
    vector<vector<int>> ans;
    vector<int> v;
    
    void f(TreeNode* root,int sum,int target)
    {
        if(root==NULL)
            return;
        
        v.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL)
        {
            sum=sum+root->val;
            if(sum==target)
            {
                ans.push_back(v);
                
            }
        }
        
        if(root->left)
        {
            f(root->left,sum+root->val,target);
        }
        
        if(root->right)
        {
            f(root->right,sum+root->val,target);
        }
        
        v.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        f(root,0,targetSum);        
        return ans;
    }
};