class Solution {
public:

    bool isValid(string str) {
        if (str.empty()) return false;
        for (char ch : str){
            if (!((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z') ||(ch >= '0' && ch <= '9') || ch == '_'))
                return false;
        }
        return true;
    }

    bool isBusiness(string str) {
        return (str == "electronics" || str == "grocery" || str == "pharmacy" || str == "restaurant");
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string, int> order = {{"electronics", 0}, {"grocery", 1}, {"pharmacy", 2}, {"restaurant", 3}};
        vector<pair<string, string>> valid;
        int n = code.size();
        for (int i = 0; i < n; i++) {
            if (isValid(code[i]) && isBusiness(businessLine[i]) && isActive[i]) {
                valid.push_back({businessLine[i], code[i]});
            }
        }

        sort(valid.begin(), valid.end(), [&](pair<string, string>& a, pair<string, string>& b) {
                if (order[a.first] != order[b.first])
                    return order[a.first] < order[b.first];
                return a.second < b.second;
            });

        vector<string> ans;

        for (auto coupon : valid)
            ans.push_back(coupon.second);

        return ans;
    }
};