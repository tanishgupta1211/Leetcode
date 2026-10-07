class Solution {
public:
    vector<string> ans;
    void solve(string s, int start, int l, int r){
        for(int i = start; i < s.size(); i++){
            if(i > start && s[i] == s[i - 1]) continue;
            if(s[i] == '(' && l > 0){
                string temp = s;
                temp.erase(i, 1);
                solve(temp, i, l - 1, r);
            }
            if(s[i] == ')' && r > 0){
                string temp = s;
                temp.erase(i, 1);
                solve(temp, i, l, r - 1);
            }
        }

        if(l == 0 && r == 0){
            int blnc = 0;
            for(char c : s){
                if(c == '(') blnc++;
                else if(c == ')'){
                    blnc--;
                    if(blnc < 0) return;
                }
            }

            if(blnc == 0) ans.push_back(s);
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        int l = 0, r = 0;
        for(char c : s){
            if(c == '(') l++;
            else if(c == ')'){
                if(l > 0) l--;
                else r++;
            }
        }
        solve(s, 0, l, r);
        return ans;
    }
};