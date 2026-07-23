class Solution {
public:
    string modifyString(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                char left = (i > 0) ? s[i - 1] : '#';
                char right = (i+1 < s.size()) ? s[i+1] : '#';
                for(char ch = 'a'; ch <= 'z'; ch++){
                    if(ch != left && ch != right){
                        s[i] = ch;
                        break;
                    }
                }
            }
        }
        return s;
    }
};