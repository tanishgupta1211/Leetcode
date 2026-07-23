class Solution {
public:
    string makeGood(string s) {
        string st;
        for(char ch : s){
            if(!st.empty() && abs(ch - st.back()) == 32) st.pop_back();
            else st.push_back(ch);
        }
        return st;
    }
};