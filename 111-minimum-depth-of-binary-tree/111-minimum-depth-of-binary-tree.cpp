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
    int minDepth(TreeNode* root) {
        if(root==nullptr){ return 0;}  // no element
        if(root->left==nullptr && root->right==nullptr ){ return 1;}  //only root
        
        queue<TreeNode*>nodes;   //same type queue as root
        nodes.push(root); //push
        int minDepthValue=1; //initialize
        
        while(!nodes.empty()){
            int len=nodes.size(); //take the len of that "level" usign queue size()
           
            
            for(int i=0;i<len;i++){
               TreeNode* tmp= nodes.front(); //take front, store in tmp
               nodes.pop(); //then pop
                if(tmp->right == nullptr && tmp->left==nullptr){ //laef node
                    return minDepthValue; //return value
                }
                if(tmp->left != nullptr){ //not leaf, so add the left to queue
                    nodes.push(tmp->left);
                }
               if(tmp->right != nullptr){ //not leaf, so add the right to queue
                    nodes.push(tmp->right);
                } 
            }
            
            minDepthValue++;  //after this level, next level value will be value++;
    
        }
        return minDepthValue;  //return value;
    }
};