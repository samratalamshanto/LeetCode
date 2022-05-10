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
    vector <int> arr;  //inorder traversal nodes list
    
   
    TreeNode* increasingBST(TreeNode* root) {
        if(root != nullptr){
            increasingBST(root->left);
            arr.push_back(root->val); //store tnodes first
            increasingBST(root->right);
        }
        TreeNode* root1 = nullptr;
         for(int i= 0 ;i<size(arr);i++)
         {
          if(root1==nullptr)
          {
            root1= new TreeNode(arr[i]);
          }
          else{
            create_tree(root1, arr[i] ); //then create right node tree
             }
          
         }
        
        return root1;
        
    }
    
    
    TreeNode* create_tree(TreeNode* root,int num)
     {
        if(root->right ==  nullptr)
        {
            root->right = new TreeNode(num);
        }
        else 
        {
            create_tree(root->right, num);
        }   
        
        return root;
    
    }
    
    
    
};