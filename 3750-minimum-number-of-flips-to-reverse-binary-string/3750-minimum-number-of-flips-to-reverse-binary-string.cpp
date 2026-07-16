class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        int flips = 0;
        while (n > 0) {
            s += '0' + (n % 2);
            n /= 2;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != s[s.size()-1-i]) flips++;
        }
        return flips;
    }
};