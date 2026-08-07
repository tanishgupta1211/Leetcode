class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(string str : words){
            if(str.find(pref) == 0) ans++;
        }
        return ans;
    }
};