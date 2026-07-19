class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1 = "";
        string str2 = "";
        for(char ch : s){
            if(ch == '#'){
                if(!str1.empty())
                    str1.pop_back();
            }
            else
                str1 += ch;
        }

        for(char ch : t){
            if(ch == '#'){
                if(!str2.empty())
                    str2.pop_back();
            }
            else
                str2 += ch;
        }
        return str1 == str2;
    }
};