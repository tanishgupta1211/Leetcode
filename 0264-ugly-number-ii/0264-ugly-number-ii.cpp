class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> u(n);
        u[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        for(int i = 1; i < n; i++) {
            int a = u[i2]*2, b = u[i3]*3, c = u[i5]*5;
            u[i] = min(a, min(b, c));
            if(u[i] == a) i2++;
            if(u[i] == b) i3++;
            if(u[i] == c) i5++;
        }
        return u[n - 1];
    }
};