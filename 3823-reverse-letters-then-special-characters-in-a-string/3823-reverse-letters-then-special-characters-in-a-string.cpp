class Solution {
public:
    bool isLetter(char ch) {
        return ch >= 'a' && ch <= 'z';
    }
    string reverseByType(string s) {
        int i = 0, j = s.size()-1;
        while (i < j) {
            if (!isLetter(s[i])) i++;
            else if (!isLetter(s[j])) j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        i = 0, j = s.size()-1;
        while (i < j) {
            if (isLetter(s[i])) i++;
            else if (isLetter(s[j])) j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};