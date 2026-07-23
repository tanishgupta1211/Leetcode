class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = words.size();
        for(string word : words){
            for(char ch : word){
                if(allowed.find(ch) == string::npos){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};