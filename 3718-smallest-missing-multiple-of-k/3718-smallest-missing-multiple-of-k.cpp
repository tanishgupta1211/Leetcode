class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        for(int x = 1; ; x++){
            if(st.count(k * x) == 0) return k * x;
        }
        return -1;
    }
};