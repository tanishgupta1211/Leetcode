class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string,int> freq;
        string word = "";
        string ans = "";
        int maxi = 0;
        paragraph += ' ';
        for(char ch : paragraph){
            if(isalpha(ch)){
                word += tolower(ch);
            }
            else{
                if(!word.empty()){
                    if(!ban.count(word)){
                        freq[word]++;
                        if(freq[word] > maxi){
                            maxi = freq[word];
                            ans = word;
                        }
                    }
                    word.clear();
                }
            }
        }
        return ans;
    }
};