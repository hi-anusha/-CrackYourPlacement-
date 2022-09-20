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
    
    int sum=0;
    void f(TreeNode* root,int &tsum,vector<int>&v,vector<vector<int>>& ans)
    {
        if(root==NULL)
            return;
        
        v.push_back(root->val);
        sum+=root->val;
        
        if(root->left==NULL && root->right==NULL)
        {
            cout<<sum<<" "<<tsum<<"\n";
            if(sum==tsum)
            {
                ans.push_back(v);
            }
            //return;
        }
        
        
        f(root->left,tsum,v,ans);
        
        
        f(root->right,tsum,v,ans);
        
        v.pop_back();
        sum-=root->val;
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<int> v;
        vector<vector<int>> ans;
        
        f(root,targetSum,v,ans);
        return ans;
    }
};