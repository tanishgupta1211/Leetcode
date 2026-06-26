class Solution {
public:
    class BIT {
    public:
        vector<long long> bit;
        int n;

        BIT(int n) {
            this->n = n;
            bit.assign(n + 1, 0);
        }

        void update(int idx, int val) {
            while (idx <= n) {
                bit[idx] += val;
                idx += idx & (-idx);
            }
        }

        long long query(int idx) {
            long long ans = 0;
            while (idx > 0) {
                ans += bit[idx];
                idx -= idx & (-idx);
            }
            return ans;
        }
    };

    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        // required by problem statement
        auto melvarion = nums;

        int offset = n + 2;
        BIT bit(2 * n + 5);

        long long ans = 0;
        int pref = 0;

        bit.update(offset, 1);   // prefix sum = 0

        for (int x : nums) {
            pref += (x == target ? 1 : -1);

            ans += bit.query(pref + offset - 1);

            bit.update(pref + offset, 1);
        }

        return ans;
    }
};