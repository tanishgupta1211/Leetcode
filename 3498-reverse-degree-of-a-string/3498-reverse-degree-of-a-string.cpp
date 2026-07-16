class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        long long degree = 0;
        for(int i = 1; i <= n; i++){
            degree += 1ll * i * ('z' - s[i-1] + 1);
        }
        return degree;
    }
};