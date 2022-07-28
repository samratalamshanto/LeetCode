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
    bool HelperLeft(TreeNode* root, int value) //left always small
    {
        if(!root) return true;
        
        if(root->val >= value) return false; //left greater or equal means wrong
        
        
        return HelperLeft(root->right,value) && HelperLeft(root->left,value);
    }
    
    bool HelperRight(TreeNode* root, int value) //right always greater
    {
        if(!root) return true;

        
        if(root->val <= value)  //right small or equal means wrong
        {
            return false;
        } 

        
        return HelperRight(root->left,value) && HelperRight(root->right,value);
    }
    
    bool isValidBST(TreeNode* root) {
        
        queue<TreeNode*> Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            int len=Q.size();
            
            for(int i=0;i<len;i++)
            {
                TreeNode* cur= Q.front();
                Q.pop();
                
                int value=cur->val;
                bool resLeft=HelperLeft(cur->left,value);
                bool resRight=HelperRight(cur->right,value);
                
                if(resLeft== false) return false;
                if(resRight==false) return false;
                

                
                if(cur->left) Q.push(cur->left);
                if(cur->right) Q.push(cur->right);
                
                
            }
        }
        
        

        return true;
    }
};