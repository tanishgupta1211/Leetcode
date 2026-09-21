class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* f = head;
        for(int i = 1; i < k; i++)
            f = f->next;
        ListNode* fast = f;
        ListNode* s = head;
        while(fast->next != NULL){
            fast = fast->next;
            s = s->next;
        }
        swap(f->val, s->val);
        return head;
    }
};