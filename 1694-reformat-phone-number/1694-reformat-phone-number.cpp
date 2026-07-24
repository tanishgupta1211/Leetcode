class Solution {
public:
    string reformatNumber(string number) {
        string digits = "";
        for(char ch : number){
            if(isdigit(ch))
                digits += ch;
        }

        string ans = "";
        int i = 0;
        int n = digits.size();
        while(n - i > 4){
            ans += digits.substr(i, 3);
            ans += '-';
            i += 3;
        }

        if(n - i == 4){
            ans += digits.substr(i, 2);
            ans += '-';
            ans += digits.substr(i + 2, 2);
        }
        else{
            ans += digits.substr(i);
        }

        return ans;
    }
};