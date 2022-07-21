/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==nullptr || head->next== nullptr) return false;
        
        // 2 pointer
        ListNode *fast=head;
        ListNode *slow=head;
        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow) 
            {
               return true;  //they will meet same position after some iterations if any cycle exits
            }
            
        }
        
        
        return false;
        
    }
};