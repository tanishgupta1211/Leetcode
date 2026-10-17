
class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
       
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
            arr.push_back({digitSum(nums[i]), nums[i]});

        sort(arr.begin(), arr.end());
        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++)
            pos[nums[i]] = i;

        vector<bool> vis(n, false);
        int swaps = 0;
        for (int i = 0; i < n; i++){
            if (vis[i] || pos[arr[i].second] == i) continue;
            int cycle = 0, j = i;
            while (!vis[j]){
                vis[j] = true;
                j = pos[arr[j].second];
                cycle++;
            }
            if (cycle > 1) swaps += cycle - 1;
        }
        return swaps;
    }
};
