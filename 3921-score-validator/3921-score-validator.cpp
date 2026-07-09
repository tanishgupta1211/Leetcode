class Solution {
public:
    int getScore(const string &event) {
        if (event == "1") return 1;
        if (event == "2") return 2;
        if (event == "3") return 3;
        if (event == "4") return 4;
        if (event == "6") return 6;
        return 0;
    }

    vector<int> scoreValidator(vector<string>& events) {
        int score = 0, wickets = 0;
        for (string &event : events) {
            
            if (wickets == 10)
                break;

            int runs = getScore(event);
            if (runs > 0) {
                score += runs;
            }
            else if (event == "W") {
                wickets++;
            }
            else if (event == "NB" || event == "WD") {
                score++;
            }
        }
        return {score, wickets};
    }
};