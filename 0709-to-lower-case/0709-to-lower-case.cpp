class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] - 'A' + 'a';
                //s[i] = tolower(s[i]);
        }
        return s;
    }
};