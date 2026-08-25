class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        bool flag[101] = {};
        for (int x : nums) flag[x] = true;
        for (int x = k; ; x += k) {
            if (x > 100 || !flag[x]) return x;
        }
        return -1;
    }
};