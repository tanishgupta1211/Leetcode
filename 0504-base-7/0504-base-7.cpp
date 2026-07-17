class Solution {
public:
    string convert(int num){
        if(num == 0) return "0";
        string digits = "0123456";
        string result = "";
        while(num > 0){
            result = digits[num % 7] + result;
            num /= 7;
        }
        return result;
    }
    string convertToBase7(int num) {
        return (num < 0) ? ("-" + convert(abs(num))) : convert(num);
    }
};