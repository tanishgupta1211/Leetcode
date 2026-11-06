class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int highestAltitude = 0, currAltitude = 0;
        for(int i = 0; i < n; i++){
            currAltitude += gain[i];
            highestAltitude = max(currAltitude, highestAltitude);
        }
        return highestAltitude;
    }
};