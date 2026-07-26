class Solution {
public:
    string finalString(string s) {
        deque<char> dq;
        bool rev = false;
        for(char ch : s){
            if(ch == 'i'){
                rev = !rev;
            }
            else{
                if(!rev)
                    dq.push_back(ch);
                else
                    dq.push_front(ch);
            }
        }
        
        string ans;
        if(!rev){
            while(!dq.empty()){
                ans += dq.front();
                dq.pop_front();
            }
        }
        else{
            while(!dq.empty()){
                ans += dq.back();
                dq.pop_back();
            }
        }
        return ans;
    }
};