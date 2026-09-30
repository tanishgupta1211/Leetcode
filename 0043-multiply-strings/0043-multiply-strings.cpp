class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        int m = num1.size(), n = num2.size();
        vector<int> ans(m + n, 0);
        for(int i = m-1; i >= 0; i--){
            for(int j = n-1; j >= 0; j--){
                int a = num1[i] - '0', b = num2[j] - '0';
                int pro = a * b;
                int pos1 = i + j, pos2 = i + j + 1;
                int sum = pro + ans[pos2];
                ans[pos2] = sum % 10;
                ans[pos1] += sum / 10;
            }
        }
        string result = "";
        for(int x : ans){
            if(result.empty() && x == 0) continue;
            result += (x + '0');
        }
        return result;
    }
};