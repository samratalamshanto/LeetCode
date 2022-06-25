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
    int getDecimalValue(ListNode* head) {
        int res=0, base=1,value;
        stack<int>S;
        while(head!=nullptr){
            value=head->val;  // single digit, so not nedded to value = value%10;
            head=head->next;  //next node
            S.push(value);
            
        }
        while(!S.empty())  //LiFO last in fisrt out, so last digit will pop first
        {
            value=S.top() ;
            S.pop();
            res= res + value*base; //value * base 
            base = base*2; //base 1 2 4 8 16 32 ......
        
        
        }        
        
         
        return res;
        
    }
};