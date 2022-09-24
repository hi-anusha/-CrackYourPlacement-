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
        
        v.push_back(root->val);
        
        f(root->left,k,v);
        f(root->right,k,v);
    }
    
    bool f1(vector<int>& v,int k)
    {
        map<int,int> mp;
        for(int i=0;i<v.size();i++)
        {
            if(mp.find(k-v[i])==mp.end())
            {
                mp[v[i]]=i;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    
    bool findTarget(TreeNode* root, int k) 
    {
        vector<int> v;
        f(root,k,v);
        return f1(v,k);
    }
};