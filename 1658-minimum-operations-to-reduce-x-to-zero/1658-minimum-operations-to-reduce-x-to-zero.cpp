class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        int k = total - x;
        if(k == 0) return n;
        if(k < 0) return -1;
        int l = 0, sum = 0, maxi = -1;
        for(int r = 0; r < n; r++){
            sum += nums[r];
            while(sum > k){
                sum -= nums[l];
                l++;
            }
            if(sum == k) maxi = max(maxi, r - l + 1);
        }
        if(maxi == -1) return -1;
        return n - maxi;;
    }
};