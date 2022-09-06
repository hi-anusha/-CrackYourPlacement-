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
    
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int x;
        return 1+max(height(root->left),height(root->right));
    }
    
    bool isHeightBalanced(TreeNode* root)
    {
        int lh=0,rh=0;
        if(root && root->left!=NULL)
            lh=height(root->left);
        if(root && root->right!=NULL)
            rh=height(root->right);
        
        if(root==NULL)
            return true;
        
        if(abs(lh-rh)<=1 && isHeightBalanced(root->left) && isHeightBalanced(root->right))
            return true;
        return false;
        
    }
    
    bool isBalanced(TreeNode* root) {
        if(isHeightBalanced(root))
            return true;
        else
            return false;
    }
};