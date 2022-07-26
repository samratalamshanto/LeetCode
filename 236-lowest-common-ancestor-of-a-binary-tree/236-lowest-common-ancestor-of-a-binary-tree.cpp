/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


// Utube Link: https://www.youtube.com/watch?v=WRAJ8Q9bICM
// important ##########


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(!root) return nullptr;
        
        if(root==p or root==q) //2nd example 5 return
        {
            return root;
        }
        
        TreeNode* leftSide = lowestCommonAncestor(root->left,p,q);  //5

        TreeNode* rightSide = lowestCommonAncestor(root->right,p,q);  //1
        
        if(leftSide && rightSide)   //if 2 value exist no nullptr , return root---- //5,1
        {
            return root; //ans 3
        }
        
        if(leftSide)  //if one exist and one side is nullptr return exist side
        {
            return leftSide;  ////2nd example 5 return //ans 5
        }
        else
        {
            return rightSide; //2nd example null return

        }

        
    }
};