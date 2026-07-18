class Solution {
public:
    string reverse(string word){
        int left = 0, right = word.size() - 1;
        while(left < right){
            swap(word[left++], word[right--]);
        }
        return word;
    }
    string reverseWords(string s) {
        string ans = "";
        stringstream ss(s);
        string word;
        while(ss >> word){
            word = reverse(word);
            if(ans.empty())
                ans += word;
            else
                ans += " " + word;
        }
        return ans;
    }
};