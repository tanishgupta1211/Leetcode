class Solution {
public:
    bool checkZeroOnes(string s) {
        int zeroSegment = 0;
        int oneSegment = 0;
        int one = 0;
        int zero = 0;
        for(char ch : s){
            if(ch == '0'){
                one = 0;
                zero++;
                zeroSegment = max(zeroSegment, zero);
            }
            else{
                zero = 0;
                one++;
                oneSegment = max(oneSegment, one);
            }
        }
        if(oneSegment > zeroSegment) return true;
        return false;
    }
};