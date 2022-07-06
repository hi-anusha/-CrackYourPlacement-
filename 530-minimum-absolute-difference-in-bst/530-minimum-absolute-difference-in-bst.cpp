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
    
    vector<int> v;
    void f(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        f(root->left);
        v.push_back(root->val);
        f(root->right);
    }
    
    
    
    int getMinimumDifference(TreeNode* root)
    {
        f(root);  
        
        for(int i=0;i<v.size()-1;i++)
        {
            d=min(d,v[i+1]-v[i]);
        }
        return d;
    }
};