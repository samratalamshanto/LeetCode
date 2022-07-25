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
    int deepestLeavesSum(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        int ans;
        
        queue< TreeNode* >Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            int len=Q.size();
            ans=0; //after every level it will 0
            //thats why uper level with no left and right will not add in the last deepest level
            for(int i=0;i<len;i++)
            {
                TreeNode* cur=Q.front();
                Q.pop();
                
               
                
                if(cur->left)
                {
                    Q.push(cur->left);
                }
                
                if(cur->right)
                {
                    Q.push(cur->right);
                }
                
                if(!cur->left && !cur->right)
                {
                    ans=ans+cur->val;
                }
            }
        }
        
        
        
        
        return ans;
        
       
    }
};