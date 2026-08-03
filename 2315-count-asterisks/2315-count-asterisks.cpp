class Solution {
public:
    int countAsterisks(string s) {
        bool in = false;
        int ans = 0;
        for(char ch : s){
            if(ch == '|'){
                in = !in;
            }
            else if(ch == '*' && !in){
                ans++;
            }
        }
        return ans;
    }
};