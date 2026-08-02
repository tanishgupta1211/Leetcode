class Solution {
public:
    int minOperations(string s) {
        int pattern1 = 0;
        int pattern2 = 0;
        for(int i = 0; i < s.size(); i++){
            char ch1 = (i % 2 == 0) ? '0' : '1';
            char ch2 = (i % 2 == 0) ? '1' : '0';
            if(s[i] != ch1) pattern1++;
            if(s[i] != ch2) pattern2++;
        }
        return min(pattern1, pattern2);
    }
};