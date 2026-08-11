class Solution {
public:
    int next(int n){
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int p = n, q = n;
        do{
            p = next(p);
            q = next(next(q));
        } while(p != q);
        return p == 1;
    }
};