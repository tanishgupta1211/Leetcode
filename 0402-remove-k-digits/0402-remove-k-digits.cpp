class Solution {
public:
    string removeKdigits(string nums, int k) {
        stack <char> st;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            char number = nums[i];
            while(!st.empty() && k > 0 && st.top() > number) {
                st.pop();
                k--;
            }
            st.push(number);
        }

        while(!st.empty() && k > 0) {
            st.pop();
            k--;
        }
        
        if(st.empty()) return "0";
        
        string ans = "";
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        while(ans.size() > 0 && ans.back() == '0') {
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());

        if(ans.empty()) return "0";

        return ans;
    }
};