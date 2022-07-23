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
      void traverse(TreeNode* root,set<int>&S)
        {
            if(root==nullptr) return;
            S.insert(root->val);
            if(root->left){
                 traverse(root->left,S);
            }
            if(root->right){
                 traverse(root->right,S);
            }

        }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>S;  //need unique values
        traverse(root,S);
      
        if(S.size()<2) return -1; //[2,2,2] no second min value so -1
        
        //The next function returns set iterator to that position.
        return *next(S.begin(),1); //second minimum value
        
    }
};