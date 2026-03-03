class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int cnt = n;
        int i = 0;
        for(int j = 0; j < n; j++){
            if(nums[j] != val){
                swap(nums[i] , nums[j]);
                i++;
            }
            else
                cnt--;
        }
        return cnt;
    }
};