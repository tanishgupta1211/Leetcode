class Solution {
public:
    bool checkString(string s) {
        bool found_b = false;
        for(char ch : s){
            if(ch == 'b') found_b = true;
            if(ch == 'a'){
                if(found_b) return false;
            }
        }
        return true;
    }
};