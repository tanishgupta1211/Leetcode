class Solution {
private:
    vector<int> find_nse(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            ans[i] = !st.empty() ? st.top() : n;   
            st.push(i);
        }
        return ans;
    }

    vector<int> find_psee(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i])
                st.pop();
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }
    
public:
    int sumSubarrayMins(vector<int> &arr) {
        vector<int> nse = find_nse(arr);
        vector<int> psee = find_psee(arr);
        int n = arr.size();
        int mod = 1e9 + 7;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int l = i - psee[i];
            int r = nse[i] - i;
            long long freq = l * r * 1LL;
            int val = (freq*arr[i]*1LL) % mod;
            sum = (sum + val) % mod;
        }
        return sum;
    }
};