/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int get_size(struct ListNode* head)
{
    int i = 0;
    while(head)
    {
        head = head->next;
        i++;
    }
    return i;
}



struct ListNode* deleteMiddle(struct ListNode* head) {
    int list_size = get_size(head);
    int i = 0;
    struct ListNode *p = head;
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    while(i < (list_size / 2) - 1)
    {
        p = p->next;
        i++;
    }
    struct ListNode *del = p->next;
    p->next = p->next->next;
    free(del);
    return head;
}
