class Solution {
public:
    bool checkRecord(string s) {
        int n = s.size();
        int a = 0, l = 0;
        for(char ch : s){
            if(ch == 'L'){
                l++;
                if(l == 3)
                    return false;
            }
            else
                l = 0;

            if(ch == 'A' && ++a == 2)
                return false;
        }
        return true;
    }
};