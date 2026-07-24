class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans = keysPressed[0];
        int longest = releaseTimes[0];
        for (int i = 1; i < releaseTimes.size(); i++) {
            int dur = releaseTimes[i] - releaseTimes[i - 1];
            if (dur > longest) {
                longest = dur;
                ans = keysPressed[i];
            }
            else if (dur == longest) {
                if (keysPressed[i] > ans) {
                    ans = keysPressed[i];
                }
            }
        }
        return ans;
    }
};