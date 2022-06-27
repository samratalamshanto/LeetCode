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
    
    //preorder root left right
    void preorder(TreeNode* root,vector<int>&ans){ 
        
        //vector ### "&ans" ### otherwise error
        //otherwise null ans return, we need to send adress of ans vector
        // passing by reference
        //the pointer * points to the address location of the data. The reference & points to the data.
        
        if(root==nullptr){
            return;
        }
         ans.push_back(root->val);
        
        if(root->left!=nullptr){
            preorder(root->left, ans);
        }
        if(root->right!=nullptr){
            preorder(root->right,ans);
        }
        
        return; //important things, only return
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        return ans;
         
    }
};