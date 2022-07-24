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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>tmp;
        if(!root) return ans;
        if(!root->left && !root->right)
        {
            
            tmp.push_back(root->val);
            ans.push_back(tmp);
            tmp.clear();
            return ans;
        }
        
        
        //BFS start----->up-to-bottom approach
        //bottom-up level order traversal,so reverse the ans
        
        
        queue<TreeNode*>Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            int len=Q.size();
            
            for(int i=0;i<len;i++)
            {
                TreeNode* cur = Q.front();
                Q.pop();
                
                tmp.push_back(cur->val);  //push_back
                
                if(cur->left)
                {
                    Q.push(cur->left);
                }
                if(cur->right)
                {
                    Q.push(cur->right);
                }
                
            }
            ans.push_back(tmp);
            tmp.clear();  //clear
        }

        reverse(ans.begin(),ans.end()); //reverse the up-down approach so it becomes down to up approach
        return ans;
    }
};