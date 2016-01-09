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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1;
        ListNode *p2 = l2; 
        ListNode *mergedList;
        
        if (l1 == NULL && l2 == NULL)
            return NULL;
        if (l1 == NULL && l2 != NULL)
            return l2;
        if (l1 != NULL && l2 == NULL)
            return l1;
        
        if (p1->val < p2->val) {
            mergedList = p1;
            p1 = p1->next;
        }
        else {
            mergedList = p2;
            p2 = p2->next;
        }
        
        ListNode *p = mergedList;
        while (p1 && p2) {
            if (p1->val < p2->val) {
                p->next = p1;
                p1 = p1->next;
            } 
            else {
                p->next = p2; 
                p2 = p2->next;
            }
            p = p->next; 
        }
        if (p1 != NULL)
            p->next = p1;
        if (p2 != NULL)
            p->next = p2;
        
        return mergedList;
    }
};