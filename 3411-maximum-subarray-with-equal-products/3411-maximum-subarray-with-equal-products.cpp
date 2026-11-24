class Solution {
public:

    vector<int> prime_factors(int x){
        vector<int> fctrs;
        for(int p = 2; p * p <= x; p++){
            if(x % p == 0){
                fctrs.push_back(p);
                while (x % p == 0) x /= p;
            }
        }
        if (x > 1) fctrs.push_back(x);
        return fctrs;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0] == 1 ? 1 : 0;
        unordered_map<int, int> freq;
        int l = 0, ans = 2;
        for (int r = 0; r < n; r++){
            vector<int> fctrs = prime_factors(nums[r]);
            while(true){
                bool cnflct = false;
                for(int p : fctrs){
                    if(freq[p] > 0){
                        cnflct = true;
                        break;
                    }
                }
                if (!cnflct) break;
                vector<int> left_factors = prime_factors(nums[l]);
                for (int p : left_factors) freq[p]--;
                l++;
            }
            for (int p : fctrs) freq[p]++;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};