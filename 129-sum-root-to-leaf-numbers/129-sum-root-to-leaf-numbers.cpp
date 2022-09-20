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
    
    int y=0;
    string x="";
    int f(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        x=x+to_string(root->val);
        
        if(root->left==NULL && root->right==NULL)
        {
             y=y+stoi(x);
        }
        
        f(root->left);
        f(root->right);
        
        x=x.substr(0,x.size()-1);
        return y;
        
    }
    
    int sumNumbers(TreeNode* root) 
    {
          return f(root);
    }
};