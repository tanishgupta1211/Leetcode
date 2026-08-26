class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";
        for(int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                int cnt = 0;
                for(int x = i; x <= j; x++){
                    if (s[x] == '1') cnt++;
                }
                if (cnt == k) {
                    string curr = s.substr(i, j - i + 1);
                    if (ans == "" || curr.size() < ans.size() || (curr.size() == ans.size() && curr < ans)){
                        ans = curr;
                    }
                }
            }
        }
        return ans;
    }
};