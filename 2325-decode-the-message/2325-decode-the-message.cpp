class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char curr = 'a';
        for(char ch : key){
            if(ch == ' ')
                continue;
            if(mp.find(ch) == mp.end()){
                mp[ch] = curr;
                curr++;
            }
        }

        string ans = "";
        for(char ch : message){
            if(ch == ' ') ans += ' ';
            else ans += mp[ch];
        }
        return ans;
    }
};