class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> index;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c)
                index.push_back(i);
        }
        vector<int> ans;
        for(int i = 0; i < s.size(); i++){
            int mini = INT_MAX;
            for(int j = 0; j < index.size(); j++){
                mini = min(mini, abs(i - index[j]));
            }
            ans.push_back(mini);
        }
        return ans;
    }
};