class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
        }
        vector<vector<long long>> dist(n, vector<long long>(k + 1, 1e18));
        priority_queue<
            tuple<long long,int,int>,
            vector<tuple<long long,int,int>>,
            greater<tuple<long long,int,int>>
        > pq;

        dist[0][1] = 0;
        pq.push({0, 0, 1});
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            long long cost = get<0>(top);
            int u = get<1>(top);
            int cnt = get<2>(top);
            if(cost > dist[u][cnt]) continue;
            if(u == n - 1) return cost;

            for(auto it : adj[u]){
                int v = it.first;
                int wt = it.second;
                int newcnt = 1;
                if(labels[u] == labels[v])
                    newcnt = cnt + 1;
                if(newcnt > k) continue;
                if(cost + wt < dist[v][newcnt]){
                    dist[v][newcnt] = cost + wt;
                    pq.push({cost + wt, v, newcnt});
                }
            }
        }
        return -1;
    }
};