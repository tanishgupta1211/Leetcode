class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        vector<int> rank(26);

        for (int i = 0; i < 26; i++)
            rank[order[i] - 'a'] = i;

        for (int i = 0; i < words.size() - 1; i++) {

            string first = words[i];
            string second = words[i + 1];

            int len = min(first.size(), second.size());
            bool found = false;

            for (int j = 0; j < len; j++) {

                if (first[j] != second[j]) {

                    if (rank[first[j] - 'a'] > rank[second[j] - 'a'])
                        return false;

                    found = true;
                    break;
                }
            }

            if (!found && first.size() > second.size())
                return false;
        }

        return true;
    }
};