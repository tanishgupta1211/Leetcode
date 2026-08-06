class Solution {
public:
    int product(int num){
        int pro = 1;
        while(num > 0){
            int digit = num % 10;
            num /= 10;
            pro *= digit;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        for(int i = n; ;i++){
            if(product(i) % t == 0) return i;
        }
        return 0;
    }
};