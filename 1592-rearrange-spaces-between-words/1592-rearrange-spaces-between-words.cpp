class Solution {
public:
    string reorderSpaces(string text) {
        
        int spaces = 0;
        for(char ch : text){
            if(ch == ' ') spaces++;
        }
        
        vector<string> words;
        string word;
        stringstream ss(text);
        while(ss >> word)
            words.push_back(word);
        
        if(words.size() == 1)
            return words[0] + string(spaces, ' ');

        int gaps = words.size() - 1;
        int each = spaces / gaps;
        int extra = spaces % gaps;

        string ans = "";
        for(int i = 0; i < words.size(); i++){
            ans += words[i];
            if(i != words.size() - 1)
                ans += string(each, ' ');
        }
        ans += string(extra, ' ');

        return ans;
    }
};