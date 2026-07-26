class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int len = min({s1.size(), s2.size(), s3.size()});
        int i = 0;
        while(i < len && s1[i] == s2[i] && s2[i] == s3[i])
            i++;
        if(i == 0) return -1;
        return (s1.size() - i) + (s2.size() - i) + (s3.size() - i);
    }
};