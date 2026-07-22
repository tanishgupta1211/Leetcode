class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> st;
        for(const auto &str : paths){
            st.insert(str[0]);
        }
        

        for(const auto &str : paths){
            if(!st.count(str[1]))
                return str[1];
        }
        return "";
    }
};