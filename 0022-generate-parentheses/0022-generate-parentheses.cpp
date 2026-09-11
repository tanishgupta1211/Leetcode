class Solution {
private: 
    void func(int opn, int cls, int n, string s, vector<string> &ans){
        if(opn == cls && (opn + cls) == 2 * n){
            ans.push_back(s); 
            return; 
        }
        if(opn < n)
            func(opn + 1, cls, n, s + '(', ans); 
        
        if(cls < opn)
            func(opn, cls + 1, n, s + ')', ans); 
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans; 
        func(0, 0, n, "", ans); 
        return ans; 
    }
};