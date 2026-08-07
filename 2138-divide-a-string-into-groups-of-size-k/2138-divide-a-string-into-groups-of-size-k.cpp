class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i = 0; i < s.size(); i += k){
            string grp = "";
            int j = i;
            while(j < s.size() && grp.size() < k){
                grp += s[j];
                j++;
            }
            while(grp.size() < k) grp += fill;
            ans.push_back(grp);
        }
        return ans;
    }
};