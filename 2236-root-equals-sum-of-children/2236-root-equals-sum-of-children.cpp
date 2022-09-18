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
    bool checkTree(TreeNode* root) 
    {
        int x,y;
       if(root->left!=NULL)
            x=root->left->val;
        else
             x=0;
        
        if(root->right!=NULL)
            y=root->right->val;
        else
             y=0;
        
        if(root->val==x+y)
            return true;
        
        return false;
        
        
    }
};