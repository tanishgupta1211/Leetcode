class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int ans = 0;
        for(int x : nums){
            int a = mp[x] + 1;
            int b = mp[x + 1] + 1;
            mp[x + 1] = a;
            mp[x + 2] = max(mp[x + 2], b);
            ans = max(ans, max(a, b));
        }
        return ans;
    }
};