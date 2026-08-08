class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int countVowelSubstrings(string word) {
        int ans = 0;
        for(int i = 0; i < word.size(); i++) {
            set<char> st;
            for(int j = i; j < word.size(); j++) {
                if(!isVowel(word[j])) break;
                st.insert(word[j]);
                if(st.size() == 5) ans++;
            }
        }
        return ans;
    }
};