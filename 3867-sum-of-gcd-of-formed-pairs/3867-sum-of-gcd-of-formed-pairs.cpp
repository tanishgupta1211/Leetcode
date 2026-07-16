class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> gcdArr;
        int mx = 0;
        for (int x : nums) {
            mx = max(mx, x);
            gcdArr.push_back(__gcd(x, mx));
        }
        sort(gcdArr.begin(), gcdArr.end());
        long long ans = 0;
        int i = 0;
        int j = gcdArr.size() - 1;
        while (i < j) {
            ans += __gcd(gcdArr[i], gcdArr[j]);
            i++;
            j--;
        }
        return ans;
    }
};