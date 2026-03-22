class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0 , n = s.size();
        int i = n-1;

        while(i >= 0 && s[i] == ' ') i--;

        for(int idx = i; idx >=0; idx--){
            if(s[idx] == ' '){
                return len;
            }
            len++;
        }

        return len;
    }
};