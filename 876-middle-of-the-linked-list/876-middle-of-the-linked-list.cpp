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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* head1=head;    //extra list node
        while(head1->next != nullptr){
            count++;        //number of nodes
            head1=head1->next;
        }
        if(count%2==0){
            count=count/2;   //if divisible then second node
}
        else
        {
            count=count/2+1;   //if divisible then middle node
        }
        
        
        for(int i=0;i<count;i++){
        head=head->next;
    }
        
    return head;    
    }
};