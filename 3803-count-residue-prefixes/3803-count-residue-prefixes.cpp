class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char> st;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            st.insert(s[i]);
            int distinct = st.size();
            int len = (i + 1) % 3;
            if (distinct == len)
                ans++;
        }
        return ans;
    }
};