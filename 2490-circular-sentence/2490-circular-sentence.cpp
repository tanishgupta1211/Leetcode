class Solution {
public:
    bool isCircularSentence(string sentence) {
        stringstream ss(sentence);
        vector<string> words;
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        for(int i = 0; i < words.size()-1; i++){
            string str1 = words[i];
            string str2 = words[i+1];
            if(str1[str1.size()-1] != str2[0]) return false;
        }
        string str = words[words.size()-1];
        return words[0][0] == str[str.size()-1];
    }
};