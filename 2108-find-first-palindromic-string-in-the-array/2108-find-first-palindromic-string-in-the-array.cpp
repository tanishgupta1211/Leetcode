class Solution {
public:
    bool isPalindrome(const string &word) {
        int l = 0, r = word.size() - 1;
        while(l < r){
            if(word[l++] != word[r--]) return false;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(string &word : words){
            if(isPalindrome(word)) return word;
        }
        return "";
    }
};