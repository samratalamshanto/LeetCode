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
    bool isPalindrome(ListNode* head) {
        ListNode* tmp=head;
        vector<int>V; //LIFO 
        while(tmp!=nullptr)
        {
            V.push_back(tmp->val);
            tmp=tmp->next; //increase the tmp
        }
        int i=0,j=V.size()-1;
        while(i<=j) //i<=j bcz 1 0 1, here 0 will match in this condition 
        // 1 0 1 is palindrome
        {
            if(V[i]==V[j])
            {
                i++;
                j--;
            }
            else{
                return false; //if any unmatch then it will return false
            }
        }
        return true;   //otherwise true
        
    }
};