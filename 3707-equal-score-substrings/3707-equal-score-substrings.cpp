class Solution {
public:
    int score(char ch){
        return ch - 'a' + 1;
    }
    bool scoreBalance(string s) {
        int total = 0;
        int rightScore = 0, leftScore = 0;
        for(int i = 0; i < s.size(); i++) total += score(s[i]);
        for(int i = 0; i < s.size()-1; i++){
            leftScore += score(s[i]);
            rightScore = total - leftScore;
            if(leftScore == rightScore) return true; 
        }
        return false;
    }
};