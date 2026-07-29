class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3)
            return false;
        bool vowel = false;
        bool consonant = false;

        for(char ch : word){
            if(!isalnum(ch))
                return false;

            if(isalpha(ch)){
                char c = tolower(ch);
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                    vowel = true;
                else
                    consonant = true;
            }
        }
        return vowel && consonant;
    }
};