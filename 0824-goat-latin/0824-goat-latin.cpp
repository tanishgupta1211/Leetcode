class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string ans = "";
        int cnt = 1;
        while(ss >> word){
            if(isVowel(word[0]))
                word += "ma";
            else{
                char first = word[0];
                word.erase(word.begin());
                word += first;
                word += "ma";
            }
            word += string(cnt, 'a');
            ans += word;
            if(!ss.eof())
                ans += " ";
            cnt++;
        }
        return ans;
    }
};