class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    bool completePrime(int num) {
        int temp = num, divisor = 1;
        while (temp > 0){
            int suffix = num % (divisor * 10);
            if (!isPrime(suffix)) return false;
            divisor *= 10;
            temp /= 10;
        }

        int prefix = 0, power = 1;
        temp = num;
        while (temp >= 10) {
            power *= 10;
            temp /= 10;
        }
        while (power > 0) {
            prefix = num / power;
            if (!isPrime(prefix)) return false;
            power /= 10;
        }
        return true;
    }
};