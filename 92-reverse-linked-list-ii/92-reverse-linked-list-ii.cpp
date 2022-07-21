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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* tmp=head;ListNode* tmp1=nullptr; 
        ListNode* tmpL=head;
        ListNode* tmpR=head;
        vector<int>V;
        
        int i=0;
        
        if(left!= right)
        {
            while(tmp!=nullptr)
            {
                ++i;
                
                if(i==left-1 && left!=1) {tmpL=tmp;}
                
                    
                if(i==right) {tmpR=tmp->next;}
                
                if(i>=left && i<=right){V.push_back(tmp->val);}



                if(tmp->next != nullptr) 
                {
                    tmp=tmp->next;
                }
                else
                {
                    break;
                }
            }
            reverse(V.begin(),V.end());
            if(left==1 && left!=right){tmpL->next= new ListNode(0);}
            else
            {tmpL->next=nullptr;}

            for(int i=0;i<V.size();i++)
            {
                tmpL->next= new ListNode(V[i]);
                if(i<=V.size()-1)
                {
                     tmpL=tmpL->next;
                }

            }
            tmpL->next=tmpR;
        }
       
        
        
        
    if(left==1 && left!=right) {return head->next;}
    else {return head;}
    }
};