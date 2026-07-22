class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        int i = 0;
        while(i < s.size()){
            if(i + 2 < s.size() && s[i + 2] == '#'){
                int num = (s[i]-'0')*10 + (s[i+1]-'0');
                ans += char('a' + num - 1);
                i += 3;
            }
            else{
                int num = s[i]-'0';
                ans += char('a' + num - 1);
                i++;
            }
        }
        return ans;
    }
};