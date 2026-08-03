class Solution {
public:
    int convert(string date) {
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
        int mon = stoi(date.substr(0,2));
        int day = stoi(date.substr(3,2));
        int total = day;
        for(int i = 0; i < mon - 1; i++)
            total += days[i];
        return total;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a1 = convert(arriveAlice);
        int a2 = convert(leaveAlice);
        int b1 = convert(arriveBob);
        int b2 = convert(leaveBob);
        int st = max(a1, b1);
        int ed = min(a2, b2);
        if(st > ed) return 0;
        return ed - st + 1;
    }
};