class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charsFreq(26,0);
        for(char ch : chars)
            charsFreq[ch - 'a']++;
        int ans = 0;
        for(string word : words){
            vector<int> wordFreq(26,0);
            for(char ch : word) wordFreq[ch-'a']++;
            bool possible = true;
            for(int i = 0; i < 26; i++){
                if(wordFreq[i] > charsFreq[i]){
                    possible = false;
                    break;
                }
            }
            if(possible)
                ans += word.size();
        }
        return ans;
    }
};