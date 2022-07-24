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
    
    //only need to right side view, not right side nodes
    // eye from right side view nodes are visible
    //no matter it right or left 
    //BFS approach
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>ans;
        
        if(!root) return ans;
        
        queue<TreeNode*> Q;
        Q.push(root);
        
        //bfs
        while(!Q.empty())
        {
            int len=Q.size();
           
            
            for(int i=0;i<len;i++)
            {
                TreeNode* tmp=Q.front(); //current top
                Q.pop();  //then pop
                 
                //we need last insert element of the level which can see as right view
                //so if i==len-1 then we push_back otherwise skip
                if(i==len-1)
                {
                    ans.push_back(tmp->val);
                }
                
                //if cur node has left or right then we push them

                if(tmp->left)
                {
                    Q.push(tmp->left);
                }
                if(tmp->right)
                {
                    Q.push(tmp->right);
                }
            }

        }
        
        
        return ans;
    }
};