class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[node] = true;
        int V = adj.size();
        for(int j = 0; j < V; j++) {
            if(adj[node][j] == 1 && !visited[j]) {
                dfs(j, adj, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        int count = 0;
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                count++;
                dfs(i, adj, visited);
            }
        }
        return count;
    }
};