class Solution {
public:
    string majorityFrequencyGroup(string s) {
        vector<int> freq(26, 0);
        for(char ch : s) freq[ch - 'a']++;
        unordered_map<int, string> mp;
        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0)
                mp[freq[i]] += char(i + 'a');
        }
        string ans = "";
        int bestF = 0;
        int bestS = 0;
        for (auto &it : mp) {
            if (it.second.size() > bestS || (it.second.size() == bestS && it.first > bestF)) {
                ans = it.second;
                bestS = it.second.size();
                bestF = it.first;
            }
        }
        return ans;
    }
};