class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        int weight = 0;
        for(string word : words){
            int n = word.size();
            weight = 0;
            for(int i = 0; i < n; i++){
                weight += weights[word[i] - 'a'];
            }
            result += char('z' - (weight  % 26));
        }
        return result;
    }
};