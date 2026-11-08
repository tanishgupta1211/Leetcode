class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<long long> st(nums.begin(), nums.end());
        int ans = -1;
        for(int n : nums){
            int root = sqrt(n);
            if(root * root == n && st.count(root)) continue;
            long long curr = n;
            int cnt = 0;
            while(st.count(curr)){
                cnt++;
                curr = curr * curr;
            }
            if(cnt >= 2) ans = max(ans, cnt);
        }
        return ans;
    }
};