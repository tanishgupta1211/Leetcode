class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
    
        for(char c : s)
            freq[c]++;
    
        int n = s.size();
    
        vector<vector<char>> bucket(n + 1);
    
        for(auto &it : freq)
            bucket[it.second].push_back(it.first);
    
        string result = "";
    
        for(int i = n; i >= 1; i--) {
            for(char c : bucket[i]) {
                result.append(i, c);
            }
        }
    
        return result;
    }
};