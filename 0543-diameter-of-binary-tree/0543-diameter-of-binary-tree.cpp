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
    
       void f(TreeNode* root,int &maxi,int n)
    {
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
        {
            maxi=max(maxi,n);
            return;
        }
        
        f(root->left,maxi,n+1);
        f(root->right,maxi,n+1);
    }
    
    int height(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        int maxi=1;
        f(root,maxi,1);
        return maxi;
    }
   
         int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        
        
        int maxi=max(max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)),lh+rh);
        
       
        cout<<lh<<" "<<rh<<" ";
        return maxi;
        
        
    
        
    
    }
};