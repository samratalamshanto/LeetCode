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
    TreeNode* HelperFunction(vector<int>& preorder, vector<int>& inorder,int &RootIndx, int left, int right)  // "&RootIndx" important ###
    {
        if(left>right) return nullptr; //break condition
        
        int pivot=left; 
        while(inorder[pivot]!=preorder[RootIndx]) 
        {
            pivot++;
        }
        
        RootIndx++; // now next root will be the RootIndx+1,
        
        TreeNode* root = new TreeNode(inorder[pivot]);  //inorder[pivot] is the root
        
        root->left=HelperFunction(preorder,inorder,RootIndx,left,pivot-1);  //so left child
        root->right=HelperFunction(preorder,inorder,RootIndx,pivot+1,right); //right child
        
        
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len=inorder.size()-1;
        int RootIndx =0;
        
        return HelperFunction(preorder,inorder,RootIndx,0,len);
        
    }
};