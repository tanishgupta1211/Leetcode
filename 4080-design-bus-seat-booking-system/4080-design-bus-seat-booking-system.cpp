
class BusBooking {
    vector<vector<bool>> seats;
    vector<vector<int>> bookingtym;
    int total = 0, cnt = 0;

public:
    BusBooking(int n) {
        seats.resize(n+1, vector<bool>(4, false));
        bookingtym.resize(n+1, vector<int>(4, 0));
    }

    void toggle(string seat) {
        int row = stoi(seat.substr(1));
        int col = seat[0] - 'A';
        if(seats[row][col]){
            total -= bookingtym[row][col];
            seats[row][col] = false;
            cnt--;
        }
        else{
            int tym = 1;
            if (col == 0 && seats[row][1]) tym = 3;
            if (col == 3 && seats[row][2]) tym = 3;
            seats[row][col] = true;
            bookingtym[row][col] = tym;
            total += tym;
            cnt++;
        }
    }

    int getTotalTime() {
        return total;
    }

    int getMinTime() {
        return cnt;
    }
};
