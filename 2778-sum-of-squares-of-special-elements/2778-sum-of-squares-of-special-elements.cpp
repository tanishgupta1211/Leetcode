class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        for(int i = 1; i <= nums.size(); i++){
            if(nums.size() % i == 0){
                int sq = nums[i-1] * nums[i-1];
                ans += sq;
            } 
        } 
        return ans;
    }
};