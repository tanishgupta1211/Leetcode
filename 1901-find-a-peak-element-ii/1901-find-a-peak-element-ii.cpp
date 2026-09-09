class Solution {
public:
    int max_element(vector<vector<int>>& arr, int col) {
        int n = arr.size();
        int maxi = INT_MIN, idx = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i][col] > maxi) {
                maxi = arr[i][col];
                idx = i;
            }
        }
        return idx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n = arr.size();
        int cl = arr[0].size();
        int l = 0, h = cl - 1;
        while(l <= h){
            int mid = (l + h) / 2;
            int rw = max_element(arr, mid);
            int left = INT_MIN, right = INT_MIN;
            if(mid - 1 >= 0)
                left = arr[rw][mid - 1];
            if(mid + 1 < cl)
                right = arr[rw][mid + 1];
            if(arr[rw][mid] > left && arr[rw][mid] > right)
                return {rw, mid};
            else if(left > arr[rw][mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        return {-1, -1};
    }
};