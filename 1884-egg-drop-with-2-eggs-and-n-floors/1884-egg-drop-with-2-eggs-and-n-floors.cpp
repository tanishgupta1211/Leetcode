class Solution {
public:
    int twoEggDrop(int n) {
        for (int d = 1; d <= n; d++) {
            if (d * (d + 1) / 2 >= n) return d;
        }
        return 0;
    }
};