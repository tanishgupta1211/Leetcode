class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0, null_bottels = 0;
        while (numBottles > 0) {
            numBottles--;
            ans++;
            null_bottels++;
            if (null_bottels >= numExchange) {
                numBottles++;
                null_bottels -= numExchange;
            }
        }
        return ans;
    }
};