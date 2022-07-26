/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        
        if(root==p or root==q)
        {
            return root;
        }
        
        //if we check left or right exist?? then call. it will not get nullprt
        //in last we will not get result by checking any exist and any nullptr?? return exit one
        
        TreeNode* leftSide= lowestCommonAncestor(root->left,p,q);
        TreeNode* rightSide= lowestCommonAncestor(root->right,p,q);
        
        if( rightSide && leftSide) //2 exist so root will common ancestor for this two
        {
            return root;
        }
        
        
        //in last we will not get result by checking any exist and any nullptr?? return exit one
        if(leftSide)
        {
            return leftSide;
        }
        else
        {
            return rightSide;
        }
        
    }
};