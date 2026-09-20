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
    int pairSum(ListNode* head) {
        int twin = 0;
        vector<int> temp;
        for(ListNode* i = head; i != NULL; i = i->next)
            temp.push_back(i->val);
        int n = temp.size();
        int l = 0, r = n - 1;
        while(l < r){
            twin = max(twin, temp[l++] + temp[r--]);
        }
        return twin;
    }
};