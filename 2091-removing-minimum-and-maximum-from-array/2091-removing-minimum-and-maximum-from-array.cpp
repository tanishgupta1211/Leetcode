class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0], maxi = nums[0];
        int sidx = 0, gidx = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                gidx = i;
            }
            else if(nums[i] < mini){
                mini = nums[i];
                sidx = i;
            }
        }
        int f = max(sidx, gidx) + 1;
        int b = n - min(sidx, gidx);
        int both = min(sidx, gidx) + 1 + n - max(sidx, gidx);
        return min({f, b, both});
    }
};