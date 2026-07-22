class Solution {
public:

bool isDigit(char ch){
    return ch >= '0' && ch <= '9';
}
    string reformat(string s) {
        string digit = "";
        string alpha = "";
        string ans = "";
        for(char ch : s){
            if(isDigit(ch)){
                digit += ch;
            }
            else
                alpha += ch;
        }
        if(abs((int)alpha.size() - (int)digit.size()) > 1) return "";
        int i = 0, j = 0;
         bool digitF = digit.size() > alpha.size();
        while(i < alpha.size() || j < digit.size()){
            if (digitF && j < digit.size())
                ans += digit[j++];

            if (i < alpha.size())
                ans += alpha[i++];

            if (!digitF && j < digit.size())
                ans += digit[j++];
        }
        return ans;
    }
};