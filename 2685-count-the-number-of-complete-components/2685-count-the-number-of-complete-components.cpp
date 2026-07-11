class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> vis;

    int nodes;
    int edges;

    void dfs(int node) {

        vis[node] = true;
        nodes++;

        edges += adj[node].size();

        for (int nei : adj[node]) {
            if (!vis[nei])
                dfs(nei);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edgesList) {

        adj.resize(n);
        vis.resize(n, false);

        for (auto &edge : edgesList) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {

            if (!vis[i]) {

                nodes = 0;
                edges = 0;

                dfs(i);

                edges /= 2;

                if (edges == (nodes * (nodes - 1)) / 2)
                    ans++;
            }
        }

        return ans;
    }
};