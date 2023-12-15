class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int N = grid.size();
        vector<vector<int>> Grid = vector<vector<int>>(N*3, vector<int>(N*3, 0));

        //将小grid中的东西按位置copy到大grid中去
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(grid[i][j] == '/'){
                    Grid[i*3][j*3+2] = 1;
                    Grid[i*3+1][j*3+1] = 1;
                    Grid[i*3+2][j*3] = 1;
                }
                else if(grid[i][j] == '\\'){
                    Grid[i*3][j*3] = 1;
                    Grid[i*3+1][j*3+1] = 1;
                    Grid[i*3+2][j*3+2] = 1;
                }
            }
        }

        int count = 0;

        //用DFS遍历Grid
        for(int i = 0; i < N*3; i++){
            for(int j = 0; j < N*3; j++){
                if(Grid[i][j] == 0){
                    DFS(Grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }

    void DFS(vector<vector<int>>& Grid, int x, int y){
        int M = Grid.size();
        //越界
        if(x < 0 || x >= M || y < 0 || y >= M) return;
        //有墙/走过了
        if(Grid[x][y] != 0) return;
        Grid[x][y] = 2;

        //设置方向
        vector<pair<int, int>> dir({{1, 0}, {-1, 0}, {0, 1}, {0, -1}});
        for(int k = 0; k < 4; k++){
            int i = x + dir[k].first;
            int j = y + dir[k].second;
            DFS(Grid, i, j);
        }
    }
};
