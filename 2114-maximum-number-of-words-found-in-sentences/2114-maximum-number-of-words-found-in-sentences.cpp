class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(string &sen : sentences){
            int spaces = 0;
            for(char ch : sen){
                if(ch == ' '){
                    spaces++;
                }
            }
            ans = max(ans, spaces);
        }
        return ans+1;
    }
};