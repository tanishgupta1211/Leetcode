
class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        set<int> available;
        for(int i = 0; i < k; i++) available.insert(i);

        // 2. Min Heap: {finishTime, serverIndex}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > busy;

        // 3. Count requests handled by each server
        vector<int> count(k, 0);

        // 4. Process every request
        for(int i = 0; i < arrival.size(); i++){
            // Release servers that have finished
            while(!busy.empty() && busy.top().first <= arrival[i]){
                int server = busy.top().second;
                available.insert(server);
                busy.pop();
            }

            // If all servers are busy, drop request
            if(available.empty())
                continue;

            // Find preferred server
            int preferred = i % k;

            // Find next available server
            auto it = available.lower_bound(preferred);

            // Circular search
            if(it == available.end())
                it = available.begin();

            int server = *it;

            // Assign request to server
            count[server]++;

            // Remove server from available set
            available.erase(it);

            // Store its finishing time in Min Heap
            busy.push({arrival[i] + load[i], server});
        }

        // 5. Find maximum requests handled
        int maxi = *max_element(count.begin(), count.end());

        vector<int> ans;

        // 6. Collect all busiest servers
        for(int i = 0; i < k; i++){
            if(count[i] == maxi)
                ans.push_back(i);
        }

        return ans;
    }
};
