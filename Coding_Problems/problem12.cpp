
// // N_queen problem

// column-wise
// #include <iostream>
// using namespace std;

// bool isSafe(int row, int col, int n, int board[][20])
// {
//     int duprow = row;
//     int dupcol = col;

//     // upper diagonal
//     while (row >= 0 && col >= 0)
//     {
//         if (board[row][col] == 1)
//         {
//             return false;
//         }
//         row--;
//         col--;
//     }

//     row = duprow;
//     col = dupcol;

//     // same row
//     while (col >= 0)
//     {
//         if (board[row][col] == 1)
//         {
//             return false;
//         }
//         col--;
//     }

//     row = duprow;
//     col = dupcol;

//     // lower diagonal
//     while (row < n && col >= 0)
//     {
//         if (board[row][col] == 1)
//         {
//             return false;
//         }
//         row++;
//         col--;
//     }

//     return true;
// }

// void solve(int col, int n, int board[][20])
// {
//     // base case
//     if (col == n)
//     {
//         // print the board
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << board[i][j] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//         return;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         if (isSafe(row, col, n, board))
//         {
//             board[row][col] = 1;
//             solve(col + 1, n, board);
//             board[row][col] = 0; // for undo (backtracking)
//         }
//     }
// }

// int main()
// {
//     int board[20][20] = {0};
//     int n;
//     cin >> n;
//     solve(0, n, board);
//     return 0;
// }

// // N_queen problem
// row-wise
// #include <iostream>
// using namespace std;

// bool isSafe(int row, int col, int n, int board[][20])
// {
//     int duprow = row;
//     int dupcol = col;

//     // upper diagonal
//     while (row >= 0 && col >= 0)
//     {
//         if (board[row][col] == 1)
//         {
//             return false;
//         }
//         row--;
//         col--;
//     }

//     row = duprow;
//     col = dupcol;

//     // same row
//     while (row >= 0)
//     {
//         if (board[row][col] == 1)
//         {
//             return false;
//         }
//         row--;
//     }

//     row = duprow;
//     col = dupcol;

//     // lower diagonal
//     while (col < n && row >= 0)
//     {
//         if (board[row][col] == 1)
//         {
//             return false;
//         }
//         col++;
//         row--;
//     }

//     return true;
// }

// void solve(int row, int n, int board[][20])
// {
//     // base case
//     if (row == n)
//     {
//         // print the board
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << board[i][j] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//         return;
//     }
//     for (int col = 0; col < n; col++)
//     {
//         if (isSafe(row, col, n, board))
//         {
//             board[row][col] = 1;
//             solve(row + 1, n, board);
//             board[row][col] = 0; // for undo (backtracking)
//         }
//     }
// }

// int main()
// {
//     int board[20][20] = {0};
//     int n;
//     cin >> n;
//     solve(0, n, board);
//     return 0;
// }


// by vector
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, int n, vector<vector<int>> &board)
{
    int duprow = row;
    int dupcol = col;

    // upper diagonal
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
            return false;

        row--;
        col--;
    }

    row = duprow;
    col = dupcol;

    // same row
    while (col >= 0)
    {
        if (board[row][col] == 1)
            return false;

        col--;
    }

    row = duprow;
    col = dupcol;

    // lower diagonal
    while (row < n && col >= 0)
    {
        if (board[row][col] == 1)
            return false;

        row++;
        col--;
    }

    return true;
}

void solve(int col, int n, vector<vector<int>> &board)
{
    if (col == n)
    {
        // print solution
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, n, board))
        {
            board[row][col] = 1;

            solve(col + 1, n, board);

            board[row][col] = 0; // backtrack
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n, 0));

    solve(0, n, board);

    return 0;
}
