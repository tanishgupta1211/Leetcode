class Solution {
public:
    bool isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    bool isLetter(char ch) {
        return ch >= 'a' && ch <= 'z';
    }
    int vowelConsonantScore(string s) {
        int n = s.size();
        int v = 0, c = 0;
        for(char ch : s){
            if(isLetter(ch)){
                if(isVowel(ch)) v++;
                else c++; 
            }
        }
        return (c == 0) ? 0 : (v / c);
    }
};