class Solution {
private:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int dfs(int x, int y,  vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        if(x < n && y < m && x >= 0 && y >= 0 && grid[x][y] == 1){
            grid[x][y] = 0;
            int area = 1;

            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                area += dfs(nx, ny, grid);
            }
            return area;
        }
        return 0;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxArea = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    maxArea = max(maxArea, dfs(i, j, grid));
                }
            }
        }
        return maxArea;
    }
};
