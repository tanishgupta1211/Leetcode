class Solution {
public:
    int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int ans = 0;
        int prev = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int curr = getValue(s[i]);
            if (curr < prev)
                ans -= curr;
            else
                ans += curr;

            prev = curr;
        }
        return ans;
    }
};