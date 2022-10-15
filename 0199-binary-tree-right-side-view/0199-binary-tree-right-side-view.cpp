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
    
    void f(TreeNode* root,vector<int>& v,int l)
    {
        if(root==NULL)
            return;
        
        if(v.size()==l)
        {
            v.push_back(root->val);
        }
        
        f(root->right,v,l+1);
        f(root->left,v,l+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        f(root,v,0);
        return v;
    }
};