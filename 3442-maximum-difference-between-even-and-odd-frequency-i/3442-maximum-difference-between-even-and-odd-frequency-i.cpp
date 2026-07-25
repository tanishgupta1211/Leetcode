class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for(char ch : s) freq[ch - 'a']++;
        int maxO = 0;
        int minE = INT_MAX;
        for(int cnt : freq){
            if(cnt == 0) continue;
            if(cnt % 2 == 0) minE = min(minE, cnt);
            else maxO = max(maxO, cnt);
        }
        return maxO - minE;
    }
};