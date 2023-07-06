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

   ListNode *reverseLst(ListNode* head)
   {
       if(head == NULL || head->next == NULL) return head;
    ListNode* p = NULL;
    ListNode* c = head;
    ListNode* n = head->next;
    while(c != NULL)
    {
       c->next = p;
       p = c;
       c = n;
       if(n != NULL) n = n -> next;
    }
    return p;
   }
    bool isPalindrome(ListNode* head) {

        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = reverseLst(slow->next);
        ListNode *dummy = head;
        slow = slow->next;
        while(slow != NULL)
        {
        if(slow->val != dummy->val) return false;
        slow = slow->next;
        dummy = dummy->next;
        }
        return true;
        
    }
};





