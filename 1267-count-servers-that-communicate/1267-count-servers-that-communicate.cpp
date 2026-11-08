class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        // traverse complete grid
        for(int i = 0; i<row; i++)
        {
            int rowCount = 0;
            int colIndex = -1;
            for(int j = 0; j<col; j++)
            {
                if(grid[i][j] == 1)
                {
                    // First 1 in row
                    if(rowCount == 0)
                    {
                        colIndex = j;
                    }
                    rowCount++;
                }
            }


            bool canCommunicate = (rowCount != 1);

            if(canCommunicate)
                ans += rowCount;
            
            else
            {
                for(int k = 0; k<row; k++)
                {
                    if(k != i && grid[k][colIndex] == 1){
                        ans++;
                        break;
                    }
                }
            }
        }

        return ans;

    }
};