/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode* odd = NULL;
    struct ListNode* even = NULL;
    struct ListNode* even_head = NULL;

    if (!head)
        return NULL;
    odd = head;
    even = head->next;
    even_head = even;
    while(even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = even_head;
    return head;
}
