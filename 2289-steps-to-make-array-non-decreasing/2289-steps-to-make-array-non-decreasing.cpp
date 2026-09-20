class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<int> dp(n, 0);
        stack<int> st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums[i] > nums[st.top()]){
                dp[i] = max(dp[i]+1, dp[st.top()]);
                st.pop();
            }
            st.push(i);
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};