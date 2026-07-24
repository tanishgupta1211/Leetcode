class Solution {
public:
    bool hasMatch(string s, string p) {
        int pos = p.find('*');
        string left = p.substr(0, pos);
        string right = p.substr(pos + 1);
        int start = s.find(left);
        if(start == string::npos)
            return false;
        int end = s.find(right, start + left.size());
        return end != string::npos;
    }
};