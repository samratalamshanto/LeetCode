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
    vector <int> arr;   //inorder array of tree nodes
    bool findTarget(TreeNode* root, int k) {
        bool ans;
        inorder(root);
      if(size(arr)>1)  {        //two pointer value search
        int i=0;
        int j= size(arr)-1;
        sort(arr.begin(), arr.end());
        
        while(i<j){
            if(arr[i]+arr[j]==k){
                ans= true;
                break;
            }
            else if(arr[i]+arr[j]<k){
                i++;
            }
            else if(arr[i]+arr[j]>k){
                j--;
            }
            else{
                ans=false;
            }
        }
      }
        else{
         
                ans = false;            // 1 node are false always
        }
        
        return ans;
        
    }
    
    void inorder(TreeNode* root){
         if(root != nullptr){
            inorder(root->left);
            arr.push_back(root->val);
            inorder(root->right);
        }
        
    }
};