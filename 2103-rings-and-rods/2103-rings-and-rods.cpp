class Solution {
public:
    int countPoints(string rings) {
        set<int> red, green, blue;
        for(int i = 0; i < rings.size(); i += 2){
            int rod = rings[i+1] - '0';
            if(rings[i] == 'R') red.insert(rod);
            else if(rings[i] == 'G') green.insert(rod);
            else blue.insert(rod);
        }

        int ans = 0;
        for(int i = 0; i < 10; i++){
            if(red.count(i) && green.count(i) && blue.count(i))
                ans++;
        }
        return ans;
    }
};