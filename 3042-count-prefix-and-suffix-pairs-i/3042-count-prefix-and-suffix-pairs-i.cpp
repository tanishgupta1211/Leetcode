class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            for(int j = i + 1; j < words.size(); j++){
                string a = words[i];
                string b = words[j];
                if(a.size() > b.size())
                    continue;
                bool prefix = b.substr(0, a.size()) == a;
                bool suffix = b.substr(b.size() - a.size()) == a;
                if(prefix && suffix)
                    ans++;
            }
        }
        return ans;
    }
};