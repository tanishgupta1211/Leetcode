class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count[101] = {0};
        for (int h : heights) count[h]++;
        int cnt = 0;
        int i = 0;
        for(int h = 1; h <= 100; h++) {
            while (count[h] > 0) {
                if (heights[i] != h) cnt++;
                i++;
                count[h]--;
            }
        }
        return cnt;
    }
};