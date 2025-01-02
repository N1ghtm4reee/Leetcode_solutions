#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int count = 0;

    int	abs(int a)
    {
        if (a < 0)
            a = -a;
        return (a);
    }

    int valid_position_x(vector<int>& board, int x, int n, int y)
    {
        int t_y = 0;
        if (y == 0)
            return (1);
        while(t_y < y)
        {
            if (board[t_y] == x || abs(board[t_y] - x) == abs(t_y - y))
                return (0);
            t_y++;
        }
        return 1;
    }

    void put_in_board(vector<vector<string>>& final, vector<int>& board, int n)
    {
        final.push_back(vector<string>(n, string(n, '.')));
        int y = 0;
        while(y < n)
        {
            final[count - 1][y][board[y]] = 'Q';
            y++;
        }
    }

    void fill_board(vector<vector<string>>& final, vector<int>& board, int n, int y)
    {
        int x = 0;
        if (y == n)
        {
            count++;
            put_in_board(final, board, n);
            return ;
        }
        while(x < n)
        {
            if (valid_position_x(board, x, n, y))
            {
                board[y] = x;
                fill_board(final, board, n, y + 1);
            }
            x++;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<int> board(n, -1);
        vector<vector<string>> final;
        fill_board(final, board, n, 0);
        return final;
    }
};
