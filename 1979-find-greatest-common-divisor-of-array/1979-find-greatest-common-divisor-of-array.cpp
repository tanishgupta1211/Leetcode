class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi) maxi = nums[i];
            if(nums[i] < mini) mini = nums[i];
        }
        int gcd = 1;
        for(int i = 2; i <= mini; i++){
            if(mini % i == 0 && maxi % i == 0){
                gcd = i;
            }
        }
        return gcd;
    }
};