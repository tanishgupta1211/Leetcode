class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a'
            || ch == 'e'
            || ch == 'i'
            || ch == 'o'
            || ch == 'u';
    }
    bool halvesAreAlike(string s) {
        string a = s.substr(0, s.size()/2);
        string b = s.substr(a.size());
        int aVowel = 0, bVowel = 0;
        for(int i = 0; i < a.size(); i++){
             char ch1 = tolower(a[i]);
             char ch2 = tolower(b[i]);
             if(isVowel(ch1)){
                aVowel++;
             }
             if(isVowel(ch2)){
                bVowel++;
             }
        }
        return aVowel == bVowel;
    }
};