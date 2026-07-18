class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st(jewels.begin(), jewels.end());
        int ans = 0;
        for(char ch : stones){
            if(st.count(ch))
                ans++;
        }
        return ans;
    }
};