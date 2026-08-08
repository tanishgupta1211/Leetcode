class Solution {
public:
    bool areNumbersAscending(string s) {
        int lastNum = INT_MIN;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                int num = 0;
                while(i < s.size() && isdigit(s[i])){
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                if(num <= lastNum) return false;
                lastNum = num;
            }
        }
        return true;
    }
};