class Solution {
public:
    bool isSubstringPresent(string s) {
        for(int i = 0; i < s.size() - 1; i++){
            string rev = "";
            rev += s[i + 1];
            rev += s[i];
            if(s.find(rev) != string::npos)
                return true;
        }
        return false;
    }
};