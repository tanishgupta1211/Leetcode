class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> cnt(26, 0);
        for(char ch : s)
            cnt[ch - 'a']++;
        vector<int> freq;
        for(int x : cnt){
            if(x > 0)
                freq.push_back(x);
        }
        sort(freq.begin(), freq.end());
        int remove = max(0, (int)freq.size() - k);
        int ans = 0;
        for(int i = 0; i < remove; i++)
            ans += freq[i];
        return ans;
    }
};