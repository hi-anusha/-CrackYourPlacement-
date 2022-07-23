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
    int maxi=0;
    
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int l=height(root->left);
        int r=height(root->right);
        
        if(l>r)
            return 1+l;
        return 1+r;
    }
    
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        
        
        maxi=max(max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)),lh+rh);
        
       
        cout<<lh<<" "<<rh<<" ";
        return maxi;
        
        
    }
};