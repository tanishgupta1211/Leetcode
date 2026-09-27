class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        vector<int> pair(n);
        stack<int> st;
        for(int i = 0; i < n; i++){
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')'){
                int open = st.top();
                st.pop();
                pair[i] = open;
                pair[open] = i;
            }
        }
        string ans = "";
        int i = 0, dir = 1;
        while(i < n && i >= 0){
            if(s[i] == '(' || s[i] == ')'){
                i = pair[i];
                dir = -dir;
            }
            else ans += s[i];
            i += dir;
        }
        return ans;
    }
};