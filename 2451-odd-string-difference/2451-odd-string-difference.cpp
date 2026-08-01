class Solution {
public:
    string signature(string word){
        string sign = "";
        for(int i = 1; i < word.size(); i++){
            sign += to_string(word[i] - word[i-1]);
            sign += "#";
        }
        return sign;
    }

    string oddString(vector<string>& words) {
        unordered_map<string,int> mp;
        for(string &word : words){
            mp[signature(word)]++;
        }
        for(string &word : words){

            if(mp[signature(word)] == 1)
                return word;
        }
        return "";
    }
};