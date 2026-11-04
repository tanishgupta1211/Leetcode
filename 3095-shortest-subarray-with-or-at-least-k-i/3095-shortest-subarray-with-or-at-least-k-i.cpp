
class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int x = 0;
            for(int j = i; j < nums.size(); j++){
                x |= nums[j];
                if(x >= k){
                    int len = j - i + 1;
                    ans = min(ans, len);
                }
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
