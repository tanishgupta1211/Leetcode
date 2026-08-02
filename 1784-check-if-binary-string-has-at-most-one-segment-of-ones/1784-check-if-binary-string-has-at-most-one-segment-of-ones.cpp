class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag = false;
        for(char ch : s){
            if(ch == '0') flag = true;
            else if(flag) return false;
        }
        return true;
    }
};