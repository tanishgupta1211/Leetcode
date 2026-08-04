class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> freq(26, 0);
        for(char ch : word)
            freq[ch - 'a']++;
        for(char ch : word){
            freq[ch - 'a']--;
            int f = 0;
            bool ok = true;
            for(int x : freq){
                if(x == 0)
                    continue;
                if(f == 0)
                    f = x;
                else if(f != x){
                    ok = false;
                    break;
                }
            }
            if(ok) return true;
            freq[ch - 'a']++;
        }
        return false;
    }
};