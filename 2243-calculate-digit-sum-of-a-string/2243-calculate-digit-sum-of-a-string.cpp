class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k){
            string temp = "";
            int i = 0;
            while(i < s.size()){
                int sum = 0;
                for(int cnt = 0; cnt < k && i < s.size(); cnt++){
                    sum += s[i] - '0';
                    i++;
                }
                temp += to_string(sum);
            }
            s = temp;
        }
        return s;
    }
};