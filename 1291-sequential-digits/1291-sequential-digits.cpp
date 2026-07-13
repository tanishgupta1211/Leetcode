class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q;
        vector<int> ans;
        for (int i = 1; i <= 9; i++)
            q.push(i);

        while (!q.empty()) {
            int num = q.front();
            q.pop();
            if (num >= low && num <= high)
                ans.push_back(num);
            int last_digit = num % 10;
            if (last_digit != 9) {
                int nextnum = num * 10 + (last_digit + 1);
                if (nextnum <= high)
                    q.push(nextnum);
            }
        }
        return ans;
    }
};