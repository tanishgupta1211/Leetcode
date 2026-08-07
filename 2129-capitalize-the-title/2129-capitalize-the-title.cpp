class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        string ans = "";
        while(ss >> word){
            for(char &ch : word) ch = tolower(ch);
            if(word.size() >= 3) word[0] = toupper(word[0]);
            if(!ans.empty()) ans += " ";
            ans += word;
        }
        return ans;
    }
};