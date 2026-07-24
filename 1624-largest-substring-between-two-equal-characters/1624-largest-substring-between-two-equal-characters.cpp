class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> first(26, -1);
        int ans = -1;
        for(int i = 0; i < s.size(); i++){
            if(first[s[i] - 'a'] == -1){
                first[s[i] - 'a'] = i;
            }
            else{
                ans = max(ans, i - first[s[i] - 'a'] - 1);
            }
        }
        return ans;
    }
};