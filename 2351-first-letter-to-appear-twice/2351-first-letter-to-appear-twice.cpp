class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> seen(26,0);
        for(char ch : s){
            if(seen[ch-'a'] == 1) return ch;
            else seen[ch-'a'] = 1;
        }
        return ' ';
    }
};