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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int count=0;
        
        ListNode* tmp=head;
        
        while(tmp!=nullptr)
        {
            count++;
            tmp=tmp->next;
        }
        
        if(k>count){
            if(k%count==0) return head; //no need to change
            else
            { //[0,1,2]
                int rem=k%count;  // 4%3 = 1
                count=count-rem;   //3-1= 2
            }
        }
        else
        {
            count=count-k;  //[1,2,3,4,5], k = 2 so count=5-2=3
        }
        
        
        //rotate the list
        
        ListNode* left=new ListNode(-1);
        ListNode* right=new ListNode(-1);
        

        
        ListNode* tmp1=left; //store left
        ListNode* tmp2=right; //store right
        tmp=head;
        
        int i =0;
        while(tmp!=nullptr)
        {
            if(i<count)
            {
                left->next=new ListNode(tmp->val);
                left=left->next;
            }
            else
            {
                right->next=new ListNode(tmp->val);
                right=right->next;
            }
            i++;
            tmp=tmp->next;
            
        }

        //now we have left and right sub list
        // we merge right+left then it will be rotated what we want
        right->next=tmp1->next;
        left->next=nullptr;
            
        
        
        
        return tmp2->next;
    }
};