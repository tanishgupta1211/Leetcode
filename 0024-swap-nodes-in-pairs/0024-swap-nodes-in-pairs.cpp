class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* newhead = head->next;
        ListNode* prev = nullptr;
        while(head != nullptr && head->next != nullptr) {
            ListNode* p = head;
            ListNode* q = head->next;
            p->next = q->next;
            q->next = p;
            if(prev != nullptr) prev->next = q;
            prev = p;
            head = p->next;
        }
        return newhead;
    }
};