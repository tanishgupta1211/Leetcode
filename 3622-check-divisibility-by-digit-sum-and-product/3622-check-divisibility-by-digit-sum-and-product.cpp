class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0, pro = 1;
        while(temp > 0){
            int digit = temp % 10;
            sum += digit;
            pro *= digit;
            temp /= 10;
        }
        return n % (sum + pro) == 0;
    }
};