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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* modified = new ListNode(0);
        ListNode* curr = modified;
        int sum = 0;
        for(ListNode* i = head; i != nullptr; i = i->next){
            if(i->val == 0 && sum != 0){
                ListNode* newNode = new ListNode(sum);
                curr->next = newNode;
                curr = newNode;
                sum = 0;
            }
            else sum += i->val;
        }
        return modified->next;
    }
};