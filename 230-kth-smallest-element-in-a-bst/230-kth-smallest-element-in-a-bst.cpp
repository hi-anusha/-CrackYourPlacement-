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
    
    void f(TreeNode* root,int k,vector<int>& v)
    {
        if(root==NULL)
            return;
        
        f(root->left,k,v);
        
        v.push_back(root->val);
        
        f(root->right,k,v);
        
    }
    
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int> v;
        f(root,k,v);
        for(auto i:v)
            cout<<i<<" ";
        return v[k-1];
    }
};