// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     // Optimized isSafe using single loop
//     bool isSafe(int row, int col, char val, vector<vector<char>> &board)
//     {

//         for (int i = 0; i < 9; i++)
//         {

//             // Row check
//             if (board[row][i] == val)
//                 return false;

//             // Column check
//             if (board[i][col] == val)
//                 return false;

//             // int rowStart = row - row % 3;
//             // int colStart = col - col % 3;

//             // for (int i = 0; i < 3; i++)
//             // {
//             //     for (int j = 0; j < 3; j++)
//             //     {
//             //         if (board[rowStart + i][colStart + j] == val)
//             //             return false;
//             //     }
//             // }

//             // 3x3 box check (optimized)
//             int r = 3 * (row / 3) + i / 3;
//             int c = 3 * (col / 3) + i % 3;

//             if (board[r][c] == val)
//                 return false;
//         }

//         return true;
//     }

//     // Backtracking solver
//     bool solve(vector<vector<char>> &board)
//     {

//         for (int i = 0; i < 9; i++)
//         {
//             for (int j = 0; j < 9; j++)
//             {

//                 if (board[i][j] == '.')
//                 {

//                     for (char val = '1'; val <= '9'; val++)
//                     {

//                         if (isSafe(i, j, val, board))
//                         {

//                             board[i][j] = val;

//                             if (solve(board))
//                                 return true;

//                             // Backtrack
//                             board[i][j] = '.';
//                         }
//                     }

//                     return false;
//                 }
//             }
//         }

//         return true;
//     }

//     void solveSudoku(vector<vector<char>> &board)
//     {
//         solve(board);
//     }
// };

// int main()
// {

//     vector<vector<char>> board = {
//         {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//         {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//         {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//         {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//         {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//         {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//         {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//         {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//         {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

//     Solution obj;
//     obj.solveSudoku(board);

//     cout << "Solved Sudoku:\n";
//     for (auto &row : board)
//     {
//         for (auto &val : row)
//         {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Optimized isSafe using single loop
    bool isSafe(int row, int col, char val, vector<vector<char>> &board)
    {
        // int n = board.size();
        // for (int i = 0; i < n; i++)
        for (int i = 0; i < 9; i++)
        {

            // Row check
            if (board[row][i] == val)
                return false;

            // Column check
            if (board[i][col] == val)
                return false;

            // int rowStart = row - row % 3;
            // int colStart = col - col % 3;

            // for (int i = 0; i < 3; i++)
            // {
            //     for (int j = 0; j < 3; j++)
            //     {
            //         if (board[rowStart + i][colStart + j] == val)
            //             return false;
            //     }
            // }

            // 3x3 box check (optimized)
            int r = 3 * (row / 3) + i / 3;
            int c = 3 * (col / 3) + i % 3;

            if (board[r][c] == val)
                return false;
        }

        return true;
    }

    // Backtracking solver
    bool solve(vector<vector<char>> &board)
    {

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {

                if (board[i][j] == '.')
                {

                    for (char val = '1'; val <= '9'; val++)
                    {

                        if (isSafe(i, j, val, board))
                        {

                            board[i][j] = val;
                            bool bakiKaSolution = solve(board);
                            if (bakiKaSolution)
                                return true;

                            // Backtrack
                            board[i][j] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};

int main()
{

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution obj;
    obj.solveSudoku(board);

    cout << "Solved Sudoku:\n";
    for (auto &row : board)
    {
        for (auto &val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}