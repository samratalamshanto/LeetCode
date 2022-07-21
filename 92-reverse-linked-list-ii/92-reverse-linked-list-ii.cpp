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
                
                if(i==left-1 && left!=1) {tmpL=tmp;} //store the start of left portion
                
                    
                if(i==right) {tmpR=tmp->next;}//store the start of the right portion
                
                //then left + reverser_part + right which will the correct ans
                
                if(i>=left && i<=right){V.push_back(tmp->val);} //left and right portion are inserted in the list.

                if(tmp->next != nullptr) 
                {
                    tmp=tmp->next;
                }
                else
                {
                    break;
                }
            }
            
            reverse(V.begin(),V.end());//reverse
            
            if(left==1 && left!=right)
            {
                tmpL->next= new ListNode(0);//[3,5]---1,2 where left is the start of linked list. that's why we return head->next
            } 
            else
            {
                tmpL->next=nullptr;  //make left's next null and then connect with reverse list  
            }

            for(int i=0;i<V.size();i++)
            {
                tmpL->next= new ListNode(V[i]);
                if(i<=V.size()-1)
                {
                     tmpL=tmpL->next;
                }

            }
            tmpL->next=tmpR; //now connect wiht the left+reverse list
            //left + reverser_part + right
        }
       
        
        
        
    if(left==1 && left!=right) {return head->next;}//[3,5]---1,2 where left is the start of linked list
    else {return head;}
    }
};