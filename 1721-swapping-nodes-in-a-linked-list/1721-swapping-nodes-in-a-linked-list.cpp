class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        int last = cnt - k + 1;
        ListNode* f = head;
        for(int i = 1; i < k; i++)
            f = f->next;
        ListNode* s = head;
        for(int i = 1; i < last; i++)
            s = s->next;
        swap(f->val, s->val);
        return head;
    }
};