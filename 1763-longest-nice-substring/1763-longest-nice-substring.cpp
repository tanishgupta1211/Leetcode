class Solution {
public:
    bool isNice(string str) {
        unordered_set<char> st(str.begin(), str.end());
        for(char ch : st) {
            if(islower(ch)) {
                if(st.find(toupper(ch)) == st.end())
                    return false;
            }
            else {
                if(st.find(tolower(ch)) == st.end())
                    return false;
            }
        }
        return true;
    }

    string longestNiceSubstring(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++) {
            for(int j = i; j < s.size(); j++) {
                string curr = s.substr(i, j - i + 1);
                if(isNice(curr) && curr.size() > ans.size())
                    ans = curr;
            }
        }
        return ans;
    }
};