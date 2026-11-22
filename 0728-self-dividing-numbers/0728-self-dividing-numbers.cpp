class Solution {
public:
    bool isSelfDividing(int num) {
        int temp = num;
        bool is_odd = (num % 2 != 0);
        while(temp > 0){
            int digit = temp % 10;
            if(digit == 0) return false;
            if (is_odd && digit % 2 == 0) return false; 
            if (num % digit != 0) return false;
            temp /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++){
            bool flag = isSelfDividing(i);
            if(flag) ans.push_back(i);
        }
        return ans;
    }
};