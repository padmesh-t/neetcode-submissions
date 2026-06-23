class Solution {
public:
    bool check(vector<vector<char>> &board,int x,int y){
        for(int i = 0 ; i < 9 ; i++ ){
            if((board[x][y] == board[x][i] && i != y) || (board[x][y] == board[i][y] && i != x)) return false;
        }
        for(int i = (x/3)*3 ; i < (x/3 + 1)*3 ; i++ ){
            for( int j = (y/3)*3 ; j < (y/3 + 1)*3 ; j++){
                if( i != x && j != y && board[x][y] == board[i][j] ) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(auto i = 0 ; i < 9 ; i++)
            for(auto j = 0 ; j < 9 ; j++)
                if(board[i][j] != '.' && !check(board,i,j) )
                    return false;
        return true;
    }
};
