class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n = s.size();
        int i = 0, ans = 0;
        while(i < n){
            int zero = 0, one = 0;
            while(i < n && s[i] == '0'){
                zero++;
                i++;
            }
            while(i < n && s[i] == '1'){
                one++;
                i++;
            }
            ans = max(ans, 2 * min(zero, one));
        }
        return ans;
    }
};