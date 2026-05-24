class Solution {
private:
    vector<int> NSE(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;
            st.push(i);
        }
        return ans;
    }
    vector<int> NGE(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;
            st.push(i);
        }
        return ans;
    }

    vector<int> PSEE(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0; i < n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }

    vector<int> PGEE(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] < arr[i]){
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }
    
    long long sum_mins(vector<int> &arr) {
        vector<int> nse = NSE(arr);
        vector<int> psee = PSEE(arr);
        int n = arr.size();
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            int l = i - psee[i];
            int r = nse[i] - i;
            long long freq = l * r * 1LL;
            long long val = (freq*arr[i]*1LL);
            sum += val;
        }
        return sum;
    }
    long long sum_maxs(vector<int> &arr) {
        vector<int> nge = NGE(arr);
        vector<int> pgee = PGEE(arr);
        int n = arr.size();
        long long sum = 0;
        for(int i=0; i < n; i++) {
            int l = i - pgee[i];
            int r = nge[i] - i;
            long long freq = l * r * 1LL;
            long long val = (freq*arr[i]*1LL);
            sum += val;
        }
        return sum;
    }
    
public:
    long long subArrayRanges(vector<int> &arr) {
        return ( sum_maxs(arr) - sum_mins(arr) );
    }
};