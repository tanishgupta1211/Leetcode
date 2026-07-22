class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> st;
        int ans = 0;
        for(string str : words){
            string rev = str;
            reverse(rev.begin(), rev.end());
            if(st.count(rev)){
                ans++;
                st.erase(rev);
            }
            else st.insert(str);
        }
        return ans;
    }
};