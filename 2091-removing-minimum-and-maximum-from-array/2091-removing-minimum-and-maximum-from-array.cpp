class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size(), mn = 0, mx = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] < nums[mn]) mn = i;
            if(nums[i] > nums[mx]) mx = i;
        }
        int a = min(mn, mx), b = max(mn, mx);
        return min({b + 1, n - a, a + n - b + 1});
    }
};