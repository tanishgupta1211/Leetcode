class Solution {
public:
    bool detectCapitalUse(string word) {
        int cptl = 0;
        for(char ch : word)
            if(isupper(ch)) cptl++;
        return (word.size() == cptl) ||
               (cptl == 0) ||
               (cptl == 1 && isupper(word[0]));
     }
};