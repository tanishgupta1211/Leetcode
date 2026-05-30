class Solution {
public:
    int maxScore(vector<int>& cardScore, int k) {
        int lsum = 0, rsum = 0, maxsum = 0;
        for(int i = 0; i < k; i++){
            lsum += cardScore[i];
            maxsum = lsum;
        }
        int ridx = cardScore.size() - 1;
        for(int i = k-1; i >= 0; i--){
            lsum -= cardScore[i];
            rsum += cardScore[ridx];
            ridx--;
            maxsum = max(maxsum, lsum + rsum);
        }
        return maxsum;
    }
};