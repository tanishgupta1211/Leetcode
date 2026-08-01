class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a'
            || ch == 'e'
            || ch == 'i'
            || ch == 'o'
            || ch == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++){
            string str = words[i];
            int n = words[i].size();
            if(isVowel(str[0]) && isVowel(str[n-1]))
                ans++;
        }
        return ans;
    }
};