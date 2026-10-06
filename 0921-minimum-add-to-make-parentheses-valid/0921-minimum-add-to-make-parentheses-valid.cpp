class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0, opn = 0;
        for(char c : s){
            if(c == '(') opn++;
            else{
                if(opn > 0) opn--;
                else ans++;
            }
        }
        return ans + opn;
    }
};