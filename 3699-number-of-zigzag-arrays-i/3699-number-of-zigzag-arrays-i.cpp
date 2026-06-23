class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {

        int m = r - l + 1;

        vector<int> up(m, 0);
        vector<int> down(m, 0);

        // length = 2 initialization
        for (int i = 0; i < m; i++) {

            up[i] = i;               // smaller values before it

            down[i] = (m - 1 - i);   // larger values before it
        }

        for (int len = 3; len <= n; len++) {

            vector<int> newUp(m, 0);
            vector<int> newDown(m, 0);

            vector<int> prefUp(m + 1, 0);
            vector<int> prefDown(m + 1, 0);

            for (int i = 0; i < m; i++) {
                prefUp[i + 1] = (prefUp[i] + up[i]) % MOD;
                prefDown[i + 1] = (prefDown[i] + down[i]) % MOD;
            }

            long long totalUp = prefUp[m];
            long long totalDown = prefDown[m];

            for (int v = 0; v < m; v++) {

                // sum of down[x] for x < v
                newUp[v] = prefDown[v];

                // sum of up[x] for x > v
                newDown[v] =
                    (totalUp - prefUp[v + 1] + MOD) % MOD;
            }

            up = move(newUp);
            down = move(newDown);
        }

        long long ans = 0;

        if (n == 2) {
            for (int i = 0; i < m; i++) {
                ans = (ans + up[i] + down[i]) % MOD;
            }
            return ans;
        }

        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return ans;
    }
};