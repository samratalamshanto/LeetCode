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
    void bfs(TreeNode* root, int &depth){
        queue<TreeNode*> Q;
        depth=0;
        Q.push(root);
        
        while(!Q.empty()){
            int len=Q.size();
            depth++;
            for(int i=0;i<len;i++){
               TreeNode* tmp=Q.front();
               Q.pop();
                if(tmp->left){
                    Q.push(tmp->left);
                }
                if(tmp->right)
                {
                    Q.push(tmp->right);
                }
            }
          
        }
        

      
    }
        
        
    int maxDepth(TreeNode* root) {
        int depth;
        if(root==nullptr) return 0;
        bfs(root,depth);
        return depth;   
    }
};