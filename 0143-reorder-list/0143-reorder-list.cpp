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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;
        //find mid of LL
        ListNode* slow = head; ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        //split into two parts from mid
        ListNode* secondhalf = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        ListNode* curr = secondhalf;
        while(curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        secondhalf = prev;
        //revere second half
        ListNode* first = head;
        while(secondhalf != NULL) {
            ListNode* firstnext = first->next;
            ListNode* secondnext = secondhalf->next;
            first->next = secondhalf;
            secondhalf->next = firstnext;
            first = firstnext;
            secondhalf = secondnext;
        }
    }
};