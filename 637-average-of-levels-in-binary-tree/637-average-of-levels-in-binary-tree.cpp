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
    vector<double> averageOfLevels(TreeNode* root) {
        
        //BFS---levelwise 
        // Average of Levels
        vector<double>ans;
        if(!root->left && !root->right)
        {
            ans.push_back(root->val);
            return ans;
        }
        
        queue<TreeNode*>Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            int len=Q.size();
            double sum=0;
            for(int i=0;i<len;i++)
            {
                TreeNode* cur=Q.front();
                Q.pop();
                sum=sum+cur->val;
                
                if(cur->left)
                {
                    Q.push(cur->left);
                }
                if(cur->right)
                {
                    Q.push(cur->right);
                }
            }
            
            ans.push_back(sum/len);
        }
        
        
        
        return ans;
        
    }
};