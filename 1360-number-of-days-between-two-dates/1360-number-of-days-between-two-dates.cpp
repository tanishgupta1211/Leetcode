class Solution {
public:
    bool isLeap(int year){
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    int totalDays(string date){
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
        
        int total = 0;
        for(int y = 1971; y < year; y++)
            total += isLeap(y) ? 366 : 365;

        for(int m = 1; m < month; m++){
            total += days[m-1];
            if(m==2 && isLeap(year))
                total++;
        }
        total += day;
        return total;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(totalDays(date1)-totalDays(date2));
    }
};