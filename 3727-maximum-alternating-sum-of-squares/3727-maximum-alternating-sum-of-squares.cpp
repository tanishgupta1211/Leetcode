class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sq;
        for(int x : nums)
            sq.push_back(1LL * x * x);
        sort(sq.begin(), sq.end());
        long long score = 0;
        int n = sq.size();
        for(int i = 0; i < n; i++){
            if(i < n / 2) score -= sq[i];
            else score += sq[i];
        }
        return score;
    }
};