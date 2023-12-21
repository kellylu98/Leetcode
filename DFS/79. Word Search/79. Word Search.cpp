class Solution {
    int M, N;
public:
    bool exist(vector<vector<char>>& board, string word) {
        M = board.size();
        N = board[0].size();

        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
               if(DFS(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }

    bool DFS(vector<vector<char>>& board, string word, int x, int y, int idxOfWord){
        //base case
        //正确
        if(idxOfWord >= word.size()) return true;
        //1.越界
        if(x < 0 || x >= M || y < 0 || y >= N) return false;
        //2.访问过(这一步包括在“不对应”里面了)
        // if(board[x][y] == '.') return false;
        //3.不对应
        if(board[x][y] != word[idxOfWord]) return false;
        char temp = board[x][y];
        board[x][y] = '.';

        bool result = DFS(board, word, x+1, y, idxOfWord+1) || DFS(board, word, x-1, y, idxOfWord+1) || DFS(board, word, x, y+1, idxOfWord+1) || DFS(board, word, x, y-1, idxOfWord+1);
        if(result) return true;

        board[x][y] = temp;
        return false;
    }
};
