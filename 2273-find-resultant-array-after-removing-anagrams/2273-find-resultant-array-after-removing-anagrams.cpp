class Solution {
public:
    bool isAnagram(string a, string b) {
        if(a.size() != b.size()) return false;
        vector<int> freq(26, 0);
        for(char ch : a) freq[ch - 'a']++;
        for(char ch : b) freq[ch - 'a']--;
        for(int i : freq){
            if(i != 0) return false;
        }
        return true;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i = 1; i < words.size(); i++){
            if(!isAnagram(ans.back(), words[i]))
                ans.push_back(words[i]);
        }
        return ans;
    }
};