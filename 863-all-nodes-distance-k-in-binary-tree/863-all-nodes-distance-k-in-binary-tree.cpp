/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution 
{
public:

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        queue<TreeNode*> q;
        q.push(root);
        unordered_map<TreeNode*, TreeNode*> mp;
        while(!q.empty())
        {
            TreeNode* x=q.front();
            q.pop();
           
            if(x->left)
            {
                mp[x->left]=x;
                q.push(x->left);
            }
            
            if(x->right)
            {
                mp[x->right]=x;
                q.push(x->right);
            }
            
        }
        
        unordered_map<TreeNode*, bool> visited; 
        queue<TreeNode*> queue;
        queue.push(target);
        visited[target] = true;
        int curr_level = 0;
        while(!queue.empty()) 
        {
            int size = queue.size();
            if(curr_level++ == k) break;
            for(int i=0; i<size; i++) 
            {
                TreeNode* current = queue.front(); queue.pop();
                if(current->left && !visited[current->left]) 
                {
                    queue.push(current->left);
                    visited[current->left] = true;
                }
                if(current->right && !visited[current->right]) 
                {
                    queue.push(current->right);
                    visited[current->right] = true;
                }
                if(mp[current] && !visited[mp[current]]) 
                {
                    queue.push(mp[current]);
                    visited[mp[current]] = true;
                }
            }
        }
        vector<int> result;
        while(!queue.empty()) 
        {
            TreeNode* current = queue.front(); 
            queue.pop();
            result.push_back(current->val);
        }
        return result;
    }
        
        
        
        
        

};