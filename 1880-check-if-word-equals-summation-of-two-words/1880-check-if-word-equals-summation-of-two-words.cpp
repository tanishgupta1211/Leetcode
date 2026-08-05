class Solution {
public:
    int value(string word){
        int num = 0;
        for(char ch : word){
            num = num * 10 + (ch-'a');
        }
        return num;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int first = value(firstWord);
        int second = value(secondWord);
        int target = value(targetWord);
        if(first + second == target) return true;
        return false;
    }
};