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
        vector<int>V;
        while(tmp!=nullptr)
        {
            V.push_back(tmp->val);
            tmp=tmp->next;
        }
        
        int low,high;
        low =0;
        high=V.size()-1;
        while(low<=high)
        {
            if(V[low]==V[high])
            {
                low++;
                high--;
            }
            else
            {
                return false;
            }
        }
        
        return true;
    }
};