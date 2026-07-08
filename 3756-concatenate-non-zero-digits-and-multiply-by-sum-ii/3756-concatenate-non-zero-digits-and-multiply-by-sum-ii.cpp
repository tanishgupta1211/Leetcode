class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        vector<int> pos;
        vector<int> digit;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                digit.push_back(s[i] - '0');
            }
        }

        int n = digit.size();
        vector<long long> presum(n+1, 0);
        vector<long long> prenum(n+1, 0);
        vector<long long> pow10(n+1, 1);

        for (int i = 1; i <= n; i++)
            pow10[i] = (pow10[i-1] * 10) % MOD;

        for (int i = 0; i < n; i++) {
            presum[i+1] = presum[i] + digit[i];
            prenum[i+1] = (prenum[i] * 10 + digit[i]) % MOD;
        }

        vector<int> ans;
        for (auto &q : queries) {
            int L = lower_bound(pos.begin(), pos.end(), q[0]) - pos.begin();
            int R = upper_bound(pos.begin(), pos.end(), q[1]) - pos.begin() - 1;
            if (L > R) {
                ans.push_back(0);
                continue;
            }
            int len = R - L + 1;
            long long sum = presum[R+1] - presum[L];
            long long num = (prenum[R+1]- prenum[L] * pow10[len] % MOD + MOD) % MOD;
            ans.push_back((num * sum) % MOD);
        }
        return ans;
    }
};