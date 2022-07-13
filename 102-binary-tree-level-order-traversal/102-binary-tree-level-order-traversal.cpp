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
    void traverse(TreeNode* root,vector<vector<int>>&res) //bfs
    {
        queue<TreeNode*>Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            int len=Q.size();  //take len and loop using len/levelwise 
            vector<int>ans;
            for(int i=0;i<len;i++)
            {
                TreeNode* tmp=Q.front();  //front inside loop
                Q.pop();         //then pop
                ans.push_back(tmp->val);
                
                if(tmp->left) Q.push(tmp->left);
                if(tmp->right) Q.push(tmp->right);
                
                
            }
            res.push_back(ans);
            
        }
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        
        traverse(root,res);
        
        return res;
        
    }
};