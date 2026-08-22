class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long low = 1, high = 100000;
        while (low < high){
            long long mid = low + (high-low)/2;
            long long apples = 2 * mid * (mid+1) * (2*mid+1);
            if (apples >= neededApples) high = mid;
            else low = mid + 1;
        }
        return 8*low;
    }
};