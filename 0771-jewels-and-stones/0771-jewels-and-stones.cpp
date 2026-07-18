class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> isJewel(128, false);
        for(char ch : jewels)
            isJewel[ch] = true;
        int ans = 0;
        for(char ch : stones)
            if(isJewel[ch])
                ans++;

        return ans;
    }
};