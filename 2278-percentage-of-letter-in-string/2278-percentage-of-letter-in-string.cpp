class Solution {
public:
    int percentageLetter(string s, char letter) {
        int freq = 0;
        for(char ch : s){
            if(ch == letter) freq++;
        }
        int prcnt = (freq * 100) / s.size();
        return prcnt;
    }
};