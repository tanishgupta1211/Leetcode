class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(string word : arr)
            mp[word]++;
        for(string word : arr){
            if(mp[word] == 1){
                k--;
                if(k == 0) return word;
            }
        }
        return "";
    }
};