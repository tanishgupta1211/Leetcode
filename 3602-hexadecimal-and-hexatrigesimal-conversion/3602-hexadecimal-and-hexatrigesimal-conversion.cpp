class Solution {
public:

    string convert(long long num, int base) {
        if (num == 0)
            return "0";
        string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result = "";
        while (num > 0) {
            result = digits[num % base] + result;
            num /= base;
        }
        return result;
    }

    string concatHex36(int n) {
        long long x = 1LL * n * n;
        long long y = 1LL * n * n * n;
        return convert(x, 16) + convert(y, 36);
    }
};