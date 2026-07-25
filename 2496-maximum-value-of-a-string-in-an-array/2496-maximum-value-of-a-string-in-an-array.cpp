class Solution {
public:
    bool isDigit(string s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                return false;
            }
        }
        return true;
    }
    int maximumValue(vector<string>& strs) {
        int maxiValue = 0;
        for(string s : strs){
            if(isDigit(s)) maxiValue = max(maxiValue, stoi(s));
            else 
                maxiValue = max(maxiValue, (int)s.size());
        }
        return maxiValue;
    }
};