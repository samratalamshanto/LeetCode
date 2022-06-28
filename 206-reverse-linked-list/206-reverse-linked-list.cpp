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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=head;ListNode* prev;
        ListNode* tmp=head;
        prev=NULL;
        while(cur!=nullptr ){
            tmp =  cur->next; //next location store in tmp variable 
            cur->next= prev; //then change cur's next location
            prev=cur;  //update prev
            cur=tmp; //update cur with previous store tmp variable
       
        }
        
        //cur point to null after end of the loop 
        //prev will be the last poisition after end of the loop
        
        return prev; //prev is the right position 
    }
};