class Solution {
public:
    bool isDigit(char ch){
        return ch >= '0' && ch <= '9';
    }

    int numDifferentIntegers(string word) {
        unordered_set<string> st;
        for(int i = 0; i < word.size(); ){
            if(!isDigit(word[i])){
                i++;
            }
            else{
                string num = "";
                while(i < word.size() && isDigit(word[i])){
                    num += word[i];
                    i++;
                }
                int j = 0;
                while(j < num.size() && num[j] == '0') j++;
                if(j == num.size()) num = "0";
                else num = num.substr(j);
                st.insert(num);
            }
        }
        return st.size();
    }
};