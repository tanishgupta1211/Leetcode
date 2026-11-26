
class Solution {
public:
    bool canAliceWin(int n) {
        int rmve = 10;
        int trn = 0;
        while(n >= rmve){
            n -= rmve;
            rmve--;
            trn++;
        }
        return trn % 2 == 1;
    }
};
