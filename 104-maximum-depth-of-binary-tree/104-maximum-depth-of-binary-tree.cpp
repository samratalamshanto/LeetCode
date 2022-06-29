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
    void bfs(TreeNode* root, int &depth){  //bfs 2 loops
        queue<TreeNode*> Q; //linklist type 
        depth=0;
        Q.push(root);
        
        while(!Q.empty()){
            int len=Q.size();
            depth++;  //if we use in last then it will increase then check the loop conditions 
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
        if(root==nullptr) return 0; //if root is null 
        bfs(root,depth);
        return depth;   
    }
};


//DFS
 /*   int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int lh=maxDepth( root->left);
        int rh=maxDepth( root->right);
        return max(lh,rh)+1; //+1 for root node. lh gives left side and rh gives the right side. we dont add root. thats why +1 for this root.
    }
    
    */

