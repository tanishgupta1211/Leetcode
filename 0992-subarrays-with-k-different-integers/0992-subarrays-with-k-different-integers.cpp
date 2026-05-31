class Solution {
public:
    int helper(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int l = 0, result = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (freq[nums[r]]++ == 0)
                k--;
            while (k < 0) {
                if (--freq[nums[l]] == 0)
                    k++;
                l++;
            }
            result += r - l + 1;
        }
        return result;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k - 1);
    }
};