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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode *ptr1 = head;
       ListNode *ptr2 = ptr1;
      int pt = k;
        while(--k)
        {
            ptr2 = ptr2->next;
        }
        while(ptr2->next != NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        cout << ptr1->val;
    
        
        ListNode *firstk = head;
        k = pt;
        while(--k)
        {
            firstk = firstk->next;
        }
        swap(firstk->val,ptr1->val);
        return head;
        
    }
};