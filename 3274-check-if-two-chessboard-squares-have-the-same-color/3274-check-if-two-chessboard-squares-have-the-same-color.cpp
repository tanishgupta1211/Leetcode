class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        int sum1 = (c1[0] - 'a') + (c1[1] - '0');
        int sum2 = (c2[0] - 'a') + (c2[1] - '0');
        return (sum1 % 2) == (sum2 % 2);
    }
};