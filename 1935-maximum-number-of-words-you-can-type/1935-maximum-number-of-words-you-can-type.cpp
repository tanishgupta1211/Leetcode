class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> st(brokenLetters.begin(), brokenLetters.end());
        stringstream ss(text);
        string word;
        int ans = 0;
        while(ss >> word){
            bool flag = true;
            for(char ch : word){
                if(st.count(ch)){
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }

        return ans;
    }
};