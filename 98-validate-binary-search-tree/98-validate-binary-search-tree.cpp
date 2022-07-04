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
    void anu(TreeNode* root,vector<int>& v)
    {
        if(root==NULL)
            return;
        anu(root->left,v);
        v.push_back(root->val);
        anu(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        int f=1;
        vector<int> v;
        anu(root,v);
        for(int i=0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" ";
            if(v[i]==v[i+1])
            {
                f=0;
                break;
            }
           if(v[i] > v[i+1])
           {
                f=0;
                break;
           }
        }
        
        if(f==0)
            return false;
        
            return true;
    }
};