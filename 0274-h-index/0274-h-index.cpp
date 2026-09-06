class Solution {
public:
    int hIndex(vector<int>& nums) {
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
            maxi = max(maxi, nums[i]);
        int maxCnt = 0;
        for(int h = 1; h <= maxi; h++){
            int cnt = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] >= h) cnt++;
            }
            if (cnt >= h) maxCnt = h;
        }
        return maxCnt;
    }
};