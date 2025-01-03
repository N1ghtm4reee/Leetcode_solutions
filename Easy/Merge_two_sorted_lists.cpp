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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *d = new ListNode();
        ListNode *new_list = d;
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        while(p1 && p2)
        {
            if (p1->val < p2->val)
            {
                new_list->next = p1;
                p1 = p1->next;
            }
            else
            {   
                new_list->next = p2;
                p2 = p2->next;
            }
            new_list = new_list->next;
        }
        if (p1)
            new_list->next = p1;
        else if (p2)
            new_list->next = p2;
        return d->next;
    }
};
