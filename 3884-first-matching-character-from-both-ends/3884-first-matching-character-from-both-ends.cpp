class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size() , i = 0;
        int l = 0, h = n - i - 1;
        while(l <= h){
            l = i;
            h = n - i - 1;
            if(s[l] == s[h]) return i;
            i++;
        }
        return -1;
    }
};