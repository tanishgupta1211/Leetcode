
class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        deque<pair<int, int>> dq;
        long long ans = 0, cost = 0;
        int j = n - 1;
        for(int i = n - 1; i >= 0; i--){
            int x = nums[i], cnt = 1;
            while(!dq.empty() && dq.back().first < x){
                cost += 1LL * (x - dq.back().first) * dq.back().second;
                cnt += dq.back().second;
                dq.pop_back();
            }
            dq.push_back({x, cnt});
            while(cost > k){
                cost -= dq.front().first - nums[j];
                if(dq.front().second > 1){
                    dq.front().second--;
                }
                else dq.pop_front();
                j--;
            }
            ans += j - i + 1;
        }
        return ans;
    }
};
