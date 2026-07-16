class Solution {
public:
    string generateTag(string caption) {
        stringstream ss(caption);
        string word;
        string ans = "#";
        bool firstWord = true;
        while (ss >> word) {
            string temp = "";
            for (char ch : word) {
                if (isalpha(ch))
                    temp += tolower(ch);
            }
            if (temp.empty())
                continue;
            if (firstWord) {
                ans += temp;
                firstWord = false;
            }
            else {
                temp[0] = toupper(temp[0]);
                ans += temp;
            }
        }
        if (ans.size() > 100)
            ans = ans.substr(0, 100);
        return ans;
    }
};