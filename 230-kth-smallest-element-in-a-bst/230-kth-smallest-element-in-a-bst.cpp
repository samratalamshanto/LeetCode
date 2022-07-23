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
    void traverse(TreeNode* root,vector <int>&ans)
    {
        if(root==nullptr) return;
        ans.push_back(root->val);
        if(root->left){
             traverse(root->left,ans);
        }
        if(root->right){
             traverse(root->right,ans);
        }
        
    }
    int kthSmallest(TreeNode* root, int k) {
        vector <int>ans;
        traverse(root,ans);
        sort(ans.begin(),ans.end());
        
        return ans[k-1];  //1-index so return k-1
    }
};