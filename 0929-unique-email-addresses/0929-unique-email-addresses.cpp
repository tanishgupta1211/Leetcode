class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for (string email : emails) {
            int at = email.find('@');
            string local = "";
            string domain = email.substr(at);
            
            for (int i = 0; i < at; i++) {
                if (email[i] == '.')
                    continue;

                if (email[i] == '+')
                    break;

                local += email[i];
            }

            st.insert(local + domain);
        }
        return st.size();
    }
};