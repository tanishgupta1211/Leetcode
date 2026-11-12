class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int sd = 1, si = 1;
        int len_sd = 1, len_si = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                len_si++;
                si = max(len_si, si);
            }
            else len_si = 1;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]){
                len_sd++;
                sd = max(len_sd, sd);
            }
            else len_sd = 1;
        }
        return max(si, sd);
    }
};