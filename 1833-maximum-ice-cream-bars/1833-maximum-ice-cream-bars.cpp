class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size(), cnt = 0;
        int mx = *max_element(costs.begin(), costs.end());
        vector<int> freq(mx+1, 0);
        for(int i = 0; i < n; i++) freq[costs[i]]++;
        for(int i = 1; i <= mx; i++){
            int take = min(freq[i], coins / i);
            cnt += take;
            coins -= take*i;
        }
        return cnt;
    }
};