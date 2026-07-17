class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0, r = 0;
        int ans = 0;
        for(char ch : s){
            if(ch == 'L') l++;
            else r++;
            if(r == l){
                ans++;
                l = r = 0;
            }
        }
        return ans;
    }
};