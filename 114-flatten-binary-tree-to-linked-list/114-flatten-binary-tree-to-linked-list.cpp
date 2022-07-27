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
    void flatten(TreeNode* root) {
        
        if(!root) return;
        
        if(root->left)
        {
            TreeNode* tmp=root->left;
            TreeNode* tmp2;
            root->left= nullptr;
            
            if(root->right)
            {
                tmp2= root->right;
                root->right = tmp;
                //here we can not assign tmp->right = tmp2;
                //frist we need to go last element of the right side of the left part
                //then we assign nullprt to tmp2
                while(tmp->right !=nullptr)  //thats the important part
                {
                    tmp=tmp->right;
                }
                tmp->right = tmp2; //we came to nullprt so assign that with root->right
                
            }
            else{ //when root->right == nullptr
                root->right = tmp;
            }
            
        }
        
        if(root->right)
        {
            flatten(root->right);
        }
        
    }
};