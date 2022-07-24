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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(!root) return ans;
        
        queue<TreeNode*>Q;
        Q.push(root);
        
        int value=0; //value assign to check zigzag means reverse or not
        
        while(!Q.empty())
        {
            int len=Q.size();
            vector<int>tmp;
            for(int i=0;i<len;i++)
            {
                TreeNode* cur = Q.front();
                Q.pop();
                
                tmp.push_back(cur->val);
                
                if(cur->left)
                {
                    Q.push(cur->left);
                }
                
                if(cur->right)
                {
                    Q.push(cur->right);
                }
            }
            if(value%2==0)  //value assign to check zigzag means reverse or not
            {
                ans.push_back(tmp);
            }
            else
            {
                reverse(tmp.begin(),tmp.end());  //reverse if odd
                ans.push_back(tmp);  //then push
            }
            value++;
        }
        
        
        
        return ans;
    }
};