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
    int d=INT_MAX;
    TreeNode* prev=NULL;
    vector<int> v;
    void f(TreeNode* root)
    {
        if(root==NULL)
            return;
        
       
        f(root->left);
         
        if (prev != NULL) {
            d = min(d, root->val - prev->val);
        }
        prev = root;
     
    
        f(root->right);
    }
    
    
    
    int getMinimumDifference(TreeNode* root)
    {
        f(root);  
        return d;
    }
};