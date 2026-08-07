class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for(string w : words){
            if(s.find(w) == 0)
                ans++;
        }
        return ans;
    }
};