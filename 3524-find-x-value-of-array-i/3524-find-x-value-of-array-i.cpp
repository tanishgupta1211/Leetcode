class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> dp(k, 0);
        vector<long long> ans(k, 0);
        for(int x : nums){
            int rem = x % k;
            vector<long long> temp(k, 0);
            for(int i = 0; i < k; i++){
                if(dp[i] > 0) temp[(i * rem) % k] += dp[i];
            }
            temp[rem]++;
            dp = temp;
            for(int i = 0; i < k; i++)
                ans[i] += dp[i];
        }
        return ans;
    }
};