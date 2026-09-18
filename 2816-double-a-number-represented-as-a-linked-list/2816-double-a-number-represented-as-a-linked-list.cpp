class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head);
        int carry = 0;
        for(ListNode* i = head; i != NULL; i = i->next){
            int value = i->val * 2 + carry;
            i->val = value % 10;
            carry = value / 10;
        }
        head = reverseList(head);
        if(carry > 0){
            ListNode* newNode = new ListNode(carry);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};