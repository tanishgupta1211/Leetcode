class Solution {
public:
    bool isLetter(char ch) {
        return ch >= 'a' && ch <= 'z';
    }
    string reverseByType(string s) {
        int i = 0, j = s.size()-1;
        while(i < j){
            while(i < j && !isLetter(s[i])) i++;
            while(i < j && !isLetter(s[j])) j--;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        i = 0, j = s.size()-1;
        while(i < j){
            while(i < j && isLetter(s[i])) i++;
            while(i < j && isLetter(s[j])) j--;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};