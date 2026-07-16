class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    int maxFreqSum(string s) {
        vector<int> freq(26, 0);
        for (char ch : s)
            freq[ch - 'a']++;
        int maxV = 0, maxC = 0;
        for (int i = 0; i < 26; i++) {
            char ch = i + 'a';
            if (isVowel(ch))
                maxV = max(maxV, freq[i]);
            else
                maxC = max(maxC, freq[i]);
        }
        return maxV + maxC;
    }
};