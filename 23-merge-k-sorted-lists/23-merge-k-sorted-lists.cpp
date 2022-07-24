/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void traverse(ListNode* root,vector<int>&tmp)
    {
        if(root==nullptr) return;
        tmp.push_back(root->val);
        if(root->next)
        {
            traverse(root->next, tmp);
            
        }
        
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* head=new ListNode(-1);  
        ListNode* ans=head;
        vector<int>tmp;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* tmp1= lists[i];
            traverse(tmp1,tmp);
        }
        
        sort(tmp.begin(),tmp.end()); //sort 
        
        for(int i=0;i<tmp.size();i++)
        {
            head->next=new ListNode(tmp[i]);  
            head=head->next;
        }
        head->next=nullptr;
        
        return ans->next;
    }
};