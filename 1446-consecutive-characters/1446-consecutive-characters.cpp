class Solution {
public:
    int maxPower(string s) {
        int start = 0, pow = 0;
        for(int end = start; end < s.size(); end++){
            if(s[start] != s[end]){
                start = end;
            }
            pow = max(pow, end - start + 1);
        }
        return pow;
    }
};