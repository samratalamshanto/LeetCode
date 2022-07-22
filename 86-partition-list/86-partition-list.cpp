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
    ListNode* partition(ListNode* head, int x) { 
        //O(n)---time
        //O(1)---space
        //2 sublist
        ListNode* left= new ListNode(-1); //left sublist
        ListNode* right= new ListNode(-1); //right sublist
        
        ListNode* tmp=left;
        
        ListNode* leftEnd = left; 
        ListNode* rightEnd= right;
        
        
        while(head!=nullptr)
        {
            if(head->val < x)
            {
                left->next = head;  //space not extra nedded for this ######
                left = left->next;
            }
            else{
                right->next =head;  //space not extra nedded for this ######
                right = right->next;
            }
            
            head=head->next;
        }
        
        left->next= rightEnd->next;  // -1 first node of right so we need to next node
        right->next= nullptr;   //last node assign with nullptr
        
        
        
        
       return tmp->next; 
    }
};