class Solution {
public:
    int minimumChairs(string s) {
        int chairs = 0;
        int sits = 0;
        for(char ch : s){
            if(ch == 'E') sits++;
            else sits--;
            chairs = max(chairs, sits);
        }
        return chairs;
    }
};