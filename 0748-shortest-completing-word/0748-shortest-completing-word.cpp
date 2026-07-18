class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> need(26, 0);
        for(char ch : licensePlate){
            if(isalpha(ch)){
                ch = tolower(ch);
                need[ch - 'a']++;
            }
        }
        string ans = "";
        for(string word : words){
            vector<int> have(26, 0);
            for(char ch : word)
                have[ch - 'a']++;
            bool ok = true;

            for(int i = 0; i < 26; i++){
                if(have[i] < need[i]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                if(ans.empty() || word.size() < ans.size())
                    ans = word;
            }
        }
        return ans;
    }
};