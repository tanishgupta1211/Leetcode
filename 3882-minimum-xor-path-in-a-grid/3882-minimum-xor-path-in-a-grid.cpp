class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<bitset<1024>> dp(m * n);
        dp[0].set(grid[0][0]);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if (i == 0 && j == 0) continue;
                int id = i * n + j;
                int val = grid[i][j];
                if(i > 0){
                    for (int k = 0; k < 1024; k++)
                        if (dp[id - n][k])
                            dp[id].set(k ^ val);
                }
                if(j > 0){
                    for (int k = 0; k < 1024; k++)
                        if (dp[id - 1][k])
                            dp[id].set(k ^ val);
                }
            }
        }
        for (int k = 0; k < 1024; k++)
            if (dp[m * n - 1][k])
                return k;
        return -1;
    }
};