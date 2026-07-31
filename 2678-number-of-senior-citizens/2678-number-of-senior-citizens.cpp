class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string str : details){
            int s = stoi(str.substr(11, 2));
            if(s > 60) ans++;
        }
        return ans;
    }
};