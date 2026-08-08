class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> freq1, freq2;
        for(string word : words1) freq1[word]++;
        for(string word : words2) freq2[word]++;
        int ans = 0;
        for(auto &it : freq1){
            if(freq1[it.first] == 1 && freq2[it.first] == 1)
                ans++;
        }
        return ans;
    }
};