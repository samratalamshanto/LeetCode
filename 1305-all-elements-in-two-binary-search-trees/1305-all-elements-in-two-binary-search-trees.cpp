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
    void traverse(TreeNode* root, vector<int> &ans)
    {
        if(!root) return;
        
        ans.push_back(root->val);
        if(root->left)
        {
            traverse(root->left,ans);
        }
        if(root->right)
        {
            traverse(root->right,ans);
        }
        
    }
    
    
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        if(root1)
        {
            traverse(root1,ans);
        }
        if(root2)
        {
            traverse(root2,ans);
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};