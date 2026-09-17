class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* write = head;
        int sum = 0;
        for(ListNode* curr = head->next; curr != nullptr; curr = curr->next) {
            if(curr->val == 0){
                write = write->next;
                write->val = sum;
                sum = 0;
            }
            else sum += curr->val;
        }
        write->next = nullptr;
        return head->next;
    }
};