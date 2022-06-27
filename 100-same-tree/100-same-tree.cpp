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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr){return true;}  //same
        if(p==nullptr && q!= nullptr){return false;} //not same
        if(q==nullptr && p!= nullptr){return false;} 
        
        bool lh= isSameTree(p->left, q->left); //left hand side bool value
        bool rh= isSameTree(p->right, q->right); //right hand side bool value
        
     
        
        return (lh && rh && (p->val==q->val)); //bool values condition check
        
        
    }
};