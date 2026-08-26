class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = i; j < n; j++){
                if(s[j] == '1') cnt++;
                if(cnt > k) break;
                if(cnt == k) {
                    string curr = s.substr(i, j - i + 1);
                    if(ans == "" || curr.size() < ans.size() || (curr.size() == ans.size() && curr < ans)){
                        ans = curr;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};