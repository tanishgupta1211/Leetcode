class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int i = 0;
        int zero = 0, one = 0;
        int ans = 0;
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == '0') zero++;
            else one++;
            while(zero > k && one > k) {
                if(s[i] == '0') zero--;
                else one--;
                i++;
            }
            ans += j - i + 1;
        }
        return ans;
    }
};