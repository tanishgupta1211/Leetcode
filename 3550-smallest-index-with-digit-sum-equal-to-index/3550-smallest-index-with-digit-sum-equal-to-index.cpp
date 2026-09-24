class Solution {
public:
    int Sum(int n){
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += digit; 
            n /= 10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(i == Sum(nums[i])) return i;
        }
        return -1;
    }
};