class Solution {
    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    bool valid(int r, int c, int n, int m) {
        if (r < 0 || r >= n || c < 0 || c >= m) return false;
        return true;
    }

    void dfs(int r, int c, vector<vector<int>>& ans, vector<vector<int>>& image, int color, int old) {
        ans[r][c] = color;
        int n = image.size();
        int m = image[0].size();
        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (valid(nr, nc, n, m) && image[nr][nc] == old && ans[nr][nc] != color) {
                dfs(nr, nc, ans, image, color, old);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old = image[sr][sc];
        vector<vector<int>> ans = image;
        dfs(sr, sc, ans, image, color, old);
        return ans;
    }
};