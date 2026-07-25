class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        sort(num.begin(), num.end());
        int len = num.size();
        int a = num[len-1] - '0';
        int b = num[len-2] - '0';
        return a * b;
    }
};