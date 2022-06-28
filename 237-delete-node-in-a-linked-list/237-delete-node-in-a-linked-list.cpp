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
    void deleteNode(ListNode* node) {
        //mainly update the node value with next node
        // and next node mainly deleted :v
        node->val=node->next->val;  //next node's value
        node->next = node->next->next; //next node's next location
        
    }
};