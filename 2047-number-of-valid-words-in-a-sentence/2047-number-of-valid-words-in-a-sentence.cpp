class Solution {
public:
    bool valid(string word) {
        int hyp = 0;
        int n = word.size();
        for(int i = 0; i < n; i++) {
            char ch = word[i];
            if(islower(ch)) continue;
            if(isdigit(ch)) return false;
            if(ch == '-') {
                hyp++;
                if(hyp > 1) return false;
                if(i == 0 || i == n-1) return false;
                if(!islower(word[i-1]) || !islower(word[i+1])) return false;
                continue;
            }
            if(ch == '!' || ch == '.' || ch == ',') {
                if(i != word.size() - 1) return false;
                continue;
            }
            return false;
        }
        return true;
    }

    int countValidWords(string sentence) {
        stringstream ss(sentence);
        string word;
        int ans = 0;
        while(ss >> word) {
            if(valid(word))
                ans++;
        }
        return ans;
    }
};