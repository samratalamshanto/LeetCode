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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tmp=dummy; 
        int carry=0;
        
        while(l1 || l2 || carry)
        {
            int val1 = l1?l1->val:0;  //0 or val
            int val2 =l2?l2->val:0;
            
            tmp->next = new ListNode((val1+val2+carry)%10);  //mod
            tmp = tmp->next;
            
            carry = (val1+val2+carry)/10; //divide
            
            if(l1)
            {
                l1=l1->next;  //update
            }
            if(l2)
            {
                l2=l2->next;
            }
         
        }
        return dummy->next;
        
    }
};