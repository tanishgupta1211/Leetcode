class Solution {
public:
    bool isDigit(char ch){
        return ch >= '0' && ch <= '9';
    }
    
    int secondHighest(string s) {
        int maxi = INT_MIN;
        int smaxi = INT_MIN;
        for(char ch : s){
            if(isDigit(ch)){
                int n = ch - '0';
                if(n > maxi){
                    smaxi = maxi;
                    maxi = n;
                }
                else if(n > smaxi  && n != maxi){
                    smaxi = n;
                }
            }
        }
        return smaxi == INT_MIN ? -1 : smaxi;
    }
};