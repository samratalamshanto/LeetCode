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
     ListNode* MergeList( ListNode* l1,  ListNode*l2)
     {
         ListNode* head= new ListNode(0);
         ListNode* cur = head;
         
         
         while(l1 != nullptr && l2 != nullptr)
         {
             if(l1->val <= l2->val)
             {
                 cur->next= l1;
                 l1=l1->next;
                 
             }
             else
             {
                 cur->next=l2;
                 l2=l2->next;
             }
             
             cur=cur->next;  //update the cur
         }
         
         // divide by 2 that's why we can get 1 unequal size list
         if(l1) 
         {
             cur->next=l1;
             l1=l1->next;
             
         }
         
         if(l2)
         {
             cur->next=l2;
             l2=l2->next;
         }
         
         
         return head->next;  //head next

         
     }
    
    
    ListNode* sortList(ListNode* head) {
        
        if(head==nullptr || head->next == nullptr)  //single list value ending conditions :Important #####
        {
            return head;
        }
        
        //2 pointer
        ListNode* tmp=nullptr;
        ListNode* slow=head;
        ListNode* fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            tmp=slow;
            slow = slow->next;          //slow increment by 1
            fast = fast->next->next;  //fast incremented by 2
        }
        
        //end of first left half
        tmp->next= nullptr;  // 2 link list created or divide the lisnk list
        
         ListNode* l1=sortList(head);  //left side recursive call
         ListNode* l2=sortList(slow);  //right side recursive call
        
     return MergeList(l1,l2);
        
        
    }
};