class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = INT_MAX;
        bool odd = false;
        for(int x : nums1){
            mini = min(mini, x);
            if (x % 2) odd = true;
        }
        if(mini % 2 == 1) return true;
        if(odd) return false;
        return true;
    }
};