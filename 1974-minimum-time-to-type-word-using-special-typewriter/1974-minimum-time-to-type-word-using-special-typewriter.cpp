class Solution {
public:
    int minTimeToType(string word) {
        char curr = 'a';
        int ans = 0;
        for(char ch : word){
            int diff = abs(ch - curr);
            ans += min(diff, 26 - diff);
            ans++;  
            curr = ch;
        }

        return ans;
    }
};