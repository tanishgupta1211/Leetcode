class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int>(n, -1));
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        ListNode* curr = head;
        while(curr != NULL && top <= bottom && left <= right){
            // Left to Right
            for(int j = left; j <= right && curr != NULL; j++){
                matrix[top][j] = curr->val;
                curr = curr->next;
            }
            top++;

            // Top to Bottom
            for(int i = top; i <= bottom && curr != NULL; i++){
                matrix[i][right] = curr->val;
                curr = curr->next;
            }
            right--;

            // Right to Left
            for(int j = right; j >= left && curr != NULL; j--){
                matrix[bottom][j] = curr->val;
                curr = curr->next;
            }
            bottom--;

            // Bottom to Top
            for(int i = bottom; i >= top && curr != NULL; i--) {
                matrix[i][left] = curr->val;
                curr = curr->next;
            }
            left++;
        }
        return matrix;
    }
};