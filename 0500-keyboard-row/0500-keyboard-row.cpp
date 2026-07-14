class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> row;
        for(char ch : "qwertyuiop") row[ch] = 1;
        for(char ch : "asdfghjkl") row[ch] = 2;
        for(char ch : "zxcvbnm") row[ch] = 3;
        vector<string> ans;
        for(string word : words){
            int r = row[tolower(word[0])];
            bool flag = true;
            for(char ch : word){
                if(row[tolower(ch)] != r){
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back(word);
        }
        return ans;
    }
};