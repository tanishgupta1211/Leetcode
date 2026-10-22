
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int zidx = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zidx = i;
                break;
            }
        }
        bool inc = true, dec = true;
        for(int i = 0; i < n; i++){
            if(nums[i] != (i - zidx + n) % n) inc = false;
            if(nums[i] != (zidx - i + n) % n) dec = false;
        }
        if(!inc && !dec) return -1;
        if(inc) return min(zidx, n - zidx + 2);
        return min(n - zidx, zidx + 2);
    }
};
