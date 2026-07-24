class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        vector<bool> pair(2048, false);
        vector<bool> ans(2048, false);
        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                pair[nums[i] ^ nums[j]] = true;
            }
        }

        for(int x = 0; x < 2048; x++){
            if(!pair[x]) continue;
            for(int num : nums){
                ans[x ^ num] = true;
            }
        }
        return count(ans.begin(), ans.end(), true);
    }
};