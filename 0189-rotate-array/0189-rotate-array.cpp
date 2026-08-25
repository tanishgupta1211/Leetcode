class Solution {
private:
    //Helper function for reversing an Array
    void reversearray(vector<int>& arr , int start , int end){
        while(start < end){
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    } 
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reversearray(nums , 0 , n-1);
        reversearray(nums , 0 , k-1);
        reversearray(nums , k , n-1);    
    }
};