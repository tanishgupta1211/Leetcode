class Solution {
public:
    string transform(string num){
        int sum = 0;
        for(char ch : num){
            sum += (ch - '0');
        }
        return to_string(sum);
    }

    int getLucky(string s, int k) {
        string num = "";
        for(char ch : s){
            int n = ch - 'a' + 1;
            num += to_string(n);
        }
        for(int i = 0; i < k; i++){
            num = transform(num);
        }
        return stoi(num);
    }
};