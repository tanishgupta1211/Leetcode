class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0, zeroes = 0;
        for(char ch : s){
            if(ch == '0') zeroes++;
            else ones++;
        }
        int i = 0;
        while(ones != 1){
            s[i++] = '1';
            ones--;
        }
        while(zeroes != 0){
            s[i++] = '0';
            zeroes--;
        }
        s[i] = '1';
        return s;
    }
};