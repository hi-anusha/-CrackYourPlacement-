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
class BSTIterator {
public:
    stack<TreeNode*> s;
    
    void pushall(TreeNode* root)
    {
        for(;root!=NULL;root=root->left)
        {
            s.push(root);
        }
    }
    
    BSTIterator(TreeNode* root) 
    {
         pushall(root);   
    }
    
    int next()
    {
         TreeNode* x=s.top();
        s.pop();
        pushall(x->right);
        return x->val;
        
    }
    
    bool hasNext() {
        if(s.empty())
            return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */