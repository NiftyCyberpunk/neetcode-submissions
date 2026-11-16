class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1'){
                    count++;
                    grid[i][j] = '0';

                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while(!q.empty()){
                        auto [x, y] = q.front();
                        q.pop();

                        for(int d = 0; d < 4; d++){
                            int nx = x + dx[d];
                            int ny = y + dy[d];

                            if(nx < n && ny < m && nx >= 0 && ny >= 0 && grid[nx][ny] == '1'){
                                grid[nx][ny] = '0';
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
