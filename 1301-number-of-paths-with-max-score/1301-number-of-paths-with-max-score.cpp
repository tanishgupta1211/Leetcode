class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        const int MOD = 1e9 + 7;
        int n = board.size();

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        vector<vector<int>> ways(n + 1, vector<int>(n + 1, 0));

        dp[n - 1][n - 1] = 0;
        ways[n - 1][n - 1] = 1;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {

                if (board[i][j] == 'X' || board[i][j] == 'S')
                    continue;

                int best = max({
                    dp[i + 1][j],
                    dp[i][j + 1],
                    dp[i + 1][j + 1]
                });

                if (best == -1)
                    continue;

                dp[i][j] = best;

                if (dp[i + 1][j] == best)
                    ways[i][j] = (ways[i][j] + ways[i + 1][j]) % MOD;

                if (dp[i][j + 1] == best)
                    ways[i][j] = (ways[i][j] + ways[i][j + 1]) % MOD;

                if (dp[i + 1][j + 1] == best)
                    ways[i][j] = (ways[i][j] + ways[i + 1][j + 1]) % MOD;

                if (board[i][j] != 'E')
                    dp[i][j] += board[i][j] - '0';
            }
        }

        if (dp[0][0] == -1)
            return {0, 0};

        return {dp[0][0], ways[0][0]};
    }
};