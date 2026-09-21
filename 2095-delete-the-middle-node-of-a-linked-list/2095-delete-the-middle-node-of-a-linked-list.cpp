class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;
        ListNode* s = head;
        ListNode* f = head;
        ListNode* prev = NULL;
        while(f != NULL && f->next != NULL) {
            prev = s;
            s = s->next;
            f = f->next->next;
        }
        prev->next = s->next;
        return head;
    }
};