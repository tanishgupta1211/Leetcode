class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int sum = 0;
        long long x = 0;
        for(char c : s){
            if(c != '0'){
                int num = c - '0';
                x = x*10 + num;
                sum += num;
            }
        }
        return x * sum;
    }
};