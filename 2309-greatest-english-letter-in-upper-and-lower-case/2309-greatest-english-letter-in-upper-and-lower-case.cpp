class Solution {
public:
    string greatestLetter(string s) {
        vector<int> small(26,0);
        vector<int> capital(26,0);
        for(char ch : s){
            if(ch >= 'a' && ch <= 'z'){
                small[ch - 'a'] = 1;
            }
            else{
                capital[ch - 'A'] = 1;
            }
        }
        string ans = "";
        for(int i = 0; i < 26; i++){
            if(small[i] && capital[i]){
                ans = 'A' + i;
            }
        }
        return ans;
    }
};