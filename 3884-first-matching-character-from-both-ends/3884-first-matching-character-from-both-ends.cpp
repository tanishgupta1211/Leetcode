class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size() , i = 0;
        while(i <= n-i-1){
            if(s[i] == s[n-i-1]) return i;
            i++;
        }
        return -1;
    }
};