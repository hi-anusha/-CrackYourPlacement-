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
    
    int f(TreeNode* root,int x)
    {
        if(root==NULL)
        {
            return INT_MAX;
        }
        
        x++;
        
        if(root->left==NULL && root->right==NULL)
        {
            return x;
        }
        
        int y=min(f(root->left,x),f(root->right,x));
        if(y==INT_MAX)
            return 0;
        return y;
            
    }
    
    int minDepth(TreeNode* root) 
    {
        if( f(root,0)==INT_MAX)
            return 0;
        return f(root,0);
    }
};