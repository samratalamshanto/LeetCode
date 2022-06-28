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
    void traversal(TreeNode* root, int &a, bool x){
        if(root==nullptr){
            return;
        } 
       
        if(root->left != nullptr){
        traversal(root->left,a,true); //for left bool eqaul to true
        }
       if(root->left == nullptr &&  root->right==nullptr && x) //bool x important 
          //otherwise it will take right as well as left
          //we need only left
       {
           a=a+root->val;
       }
        if(root->right){
            traversal(root->right,a,false);
        } //for right bool = flase;
        return;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int a=0;
        bool x=false; //bool value for only true for left and false for right
        //all tym false,only left true. 
        //if we first give true then only root value will add here. [1] will add.
        traversal(root,a,x);
        
        return a;
        
    }
};