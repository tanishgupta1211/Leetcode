class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26,0);
        for(char ch : s) freq[ch - 'a']++;
        int f = 0;
        for(int x : freq){
            if(x == 0) continue;
            if(f == 0) f = x;
            else if(f != x) return false;
        }
        return true;
    }
};