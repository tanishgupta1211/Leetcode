class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = logs.size();
        int q = queries.size();
        sort(logs.begin(), logs.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });
        vector<pair<int, int>> sortedq;
        for(int i = 0; i < q; i++){
            sortedq.push_back({queries[i], i});
        }
        sort(sortedq.begin(), sortedq.end());
        vector<int> freq(n + 1, 0);
        vector<int> ans(q);
        int l = 0, r = 0;
        int act = 0;
        for(auto &query : sortedq){
            int t = query.first;
            int idx = query.second;
            int start = t - x;
            while(r < m && logs[r][1] <= t){
                int id = logs[r][0];
                if(freq[id] == 0)
                    act++;
                freq[id]++;
                r++;
            }
            while(l < r && logs[l][1] < start){
                int id = logs[l][0];
                freq[id]--;
                if(freq[id] == 0)
                    act--;
                l++;
            }
            ans[idx] = n - act;
        }
        return ans;
    }
};