class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int prev = head->val;
        ListNode* temp = head->next;
        int f = -1, l = -1;
        int mndist = INT_MAX, pos = 1;
        while (temp->next != nullptr) {
            int curr = temp->val;
            int next = temp->next->val;
            if((curr > prev && curr > next) ||(curr < prev && curr < next)){
                if (f == -1) f = pos;
                else mndist = min(mndist, pos - l);
                l = pos;
            }
            prev = curr;
            temp = temp->next;
            pos++;
        }
        if(f == l) return {-1, -1};
        return {mndist, l - f};
    }
};