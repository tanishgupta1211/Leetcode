class Solution {
public:

    int count(ListNode* head, int limit){
        int cnt = 0;
        while(head != NULL && cnt < limit){
            cnt++;
            head = head->next;
        }
        return cnt;
    }

    ListNode* reverse(ListNode* head, int cnt) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(cnt--){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        int grpsize = 1;
        while(curr != NULL){
            int cnt = count(curr, grpsize);
            ListNode* nxtgrp = curr;
            for(int i = 0; i < cnt; i++)
                nxtgrp = nxtgrp->next;
            if(cnt % 2 == 0){
                ListNode* grpstrt = curr;
                curr = reverse(curr, cnt);
                if(prev == NULL) head = curr;
                else prev->next = curr;
                grpstrt->next = nxtgrp;
                prev = grpstrt;
                curr = nxtgrp;
            }
            else{ 
                for(int i = 0; i < cnt; i++){
                    prev = curr;
                    curr = curr->next;
                }
            }
            grpsize++
        }
        return head;
    }
};