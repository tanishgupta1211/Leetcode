class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {

        unordered_map<string, int> runs = {
            {"1", 1},
            {"2", 2},
            {"3", 3},
            {"4", 4},
            {"6", 6},
            {"NB", 1},
            {"WD", 1}
        };

        int score = 0;
        int wickets = 0;

        for (const string &event : events) {

            if (wickets == 10)
                break;

            if (event == "W") {
                wickets++;
            }
            else {
                score += runs[event];
            }
        }

        return {score, wickets};
    }
};