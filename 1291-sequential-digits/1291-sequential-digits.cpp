class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> result;
        int minSize = to_string(low).size();
        int maxSize = to_string(high).size();

        for (int currLen = minSize; currLen <= maxSize; currLen++) {
            for (int i = 0; i + currLen <= 9; i++) {
                int num = stoi(s.substr(i, currLen));
                if (num >= low && num <= high)
                    result.push_back(num);
            }
        }

        return result;
    }
};