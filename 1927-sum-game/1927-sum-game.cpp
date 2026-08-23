class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int a = 0, b = 0, x = 0, y = 0;
        for(int i = 0; i < n / 2; i++){
            if(num[i] == '?') x++;
            else a += num[i] - '0';
        }
        for(int i = n / 2; i < n; i++){
            if(num[i] == '?') y++;
            else b += num[i] - '0';
        }
        if((x + y) % 2) return true;
        int d = a - b, q = y - x;
        if(d == 9 * q / 2) return false;
        return true;
    }
};