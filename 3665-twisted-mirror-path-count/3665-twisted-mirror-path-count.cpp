
class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int mod = 1e9 + 7;
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(2, 0)));
        dp[0][0][0] = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int r = dp[i][j][0];
                int d = dp[i][j][1];
                if(grid[i][j] == 0){
                    int ways = (r + d) % mod;
                    if(j + 1 < n)
                        dp[i][j + 1][0] = (dp[i][j + 1][0] + ways) % mod;

                    if(i + 1 < m)
                        dp[i + 1][j][1] = (dp[i + 1][j][1] + ways) % mod;
                }

                else{
                    if(i + 1 < m)
                        dp[i + 1][j][1] = (dp[i + 1][j][1] + r) % mod;

                    if(j + 1 < n)
                        dp[i][j + 1][0] = (dp[i][j + 1][0] + d) % mod;
                }
            }
        }
        return (dp[m - 1][n - 1][0] + dp[m - 1][n - 1][1]) % mod;
    }
};
