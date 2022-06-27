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
    //postorder left right root
    void postorder(TreeNode* root,vector<int>&ans)
        //## &ans ## refernece to the ans vector
       // points to the data where * points to data location
    {
       if(root==nullptr) return;
        
        if(root->left){postorder(root->left, ans);} //left
        if(root->right){postorder(root->right,ans);} //right
        ans.push_back(root->val);                   //root
        
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
};