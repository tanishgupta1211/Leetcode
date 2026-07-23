class Solution {
public:
    string thousandSeparator(int n) {
        string num = to_string(n);
        string ans = "";
        int cnt = 0;
        for(int i = num.size() - 1; i >= 0; i--) {
            ans += num[i];
            cnt++;
            if(cnt == 3 && i != 0) {
                ans += '.';
                cnt = 0;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};