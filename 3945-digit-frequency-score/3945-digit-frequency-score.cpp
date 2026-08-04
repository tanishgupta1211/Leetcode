class Solution {
public:
    int digitFrequencyScore(int n) {
        if(n == 0) return 0;
        vector<int> freq(10, 0);
        while(n > 0){
            int digit = n % 10;
            freq[digit]++;
            n /= 10;
        }
        int ans = 0;
        for(int i = 0; i < 10; i++){
            ans += (i * freq[i]);
        }
        return ans;
    }
};