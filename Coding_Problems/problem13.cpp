// //Rat in maze
// #include <iostream>
// using namespace std;

// bool isSafe(int row, int col, int n, int maze[10][10], int visited[10][10])
// {
//     // if ((row >= 0 && col >= 0) && (row < n && col < n) && (maze[row][col] == 1) && (visited[row][col] == 0))
//     // {
//     //     return true;
//     // }
//     // return false;

//     return ((row >= 0 && col >= 0) && (row < n && col < n) && (maze[row][col] == 1) && (visited[row][col] == 0)); //(maze[row][col] == 1) && (visited[row][col] == 0)bcz upr na jae wrna upr v ja skta hia na
// }
// void solve(int row, int col, int n, int maze[][10], int visited[][10])
// {
//     if (row == n - 1 && col == n - 1)
//     {

//         visited[row][col] = 1;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << visited[i][j] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//         visited[row][col] = 0;
//         return;
//     }

//     // if (isSafe(row + 1, col, n, maze, visited))
//     // {
//     //     visited[row][col] = 1;

//     //     solve(row + 1, col, n, maze, visited);
//     //     visited[row][col] = 0;
//     // }
//     // if (isSafe(row - 1, col, n, maze, visited))
//     // {
//     //     visited[row][col] = 1;

//     //     solve(row - 1, col, n, maze, visited);
//     //     visited[row][col] = 0;
//     // }
//     // if (isSafe(row, col + 1, n, maze, visited))

//     // {
//     //     visited[row][col] = 1;

//     //     solve(row, col + 1, n, maze, visited);
//     //     visited[row][col] = 0;
//     // }
//     // if (isSafe(row, col - 1, n, maze, visited))
//     // {
//     //     visited[row][col] = 1;

//     //     solve(row, col - 1, n, maze, visited);
//     //     visited[row][col] = 0;
//     // }

//     visited[row][col] = 1;
//     if (isSafe(row + 1, col, n, maze, visited))
//     {

//         solve(row + 1, col, n, maze, visited);
//     }
//     if (isSafe(row - 1, col, n, maze, visited))
//     {

//         solve(row - 1, col, n, maze, visited);
//     }
//     if (isSafe(row, col + 1, n, maze, visited))

//     {

//         solve(row, col + 1, n, maze, visited);
//     }
//     if (isSafe(row, col - 1, n, maze, visited))
//     {

//         solve(row, col - 1, n, maze, visited);
//     }
//     visited[row][col] = 0;
// }
// int main()
// {
//     int n = 3;

//     int maze[10][10] = {

//         {1, 1, 0},
//         {1, 1, 0},
//         {0, 1, 1}};

//     int visited[10][10] = {0};
//     cout << "Print" << endl;

//     solve(0, 0, n, maze, visited);

//     return 0;
// }

//// using vector
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSafe(int row, int col, int n, vector<vector<int>> &maze, vector<vector<int>> &visited)
// {

//     return ((row >= 0 && col >= 0) && (row < n && col < n) && (maze[row][col] == 1) && (visited[row][col] == 0));
// }
// void solve(int row, int col, int n, vector<vector<int>> &maze, vector<vector<int>> &visited, vector<vector<vector<int>>> &ans)
// {
//     if (row == n - 1 && col == n - 1)
//     {

//         visited[row][col] = 1;

//         // for (int i = 0; i < n; i++)
//         // {
//         //     for (int j = 0; j < n; j++)
//         //     {
//         //         cout << visited[i][j] << " ";
//         //     }
//         //     cout << endl;
//         // }
//         // cout << endl;

//         ans.push_back(visited);
//         visited[row][col] = 0;
//         return;
//     }

//     visited[row][col] = 1;
//     if (isSafe(row + 1, col, n, maze, visited))
//     {

//         solve(row + 1, col, n, maze, visited, ans);
//     }
//     if (isSafe(row - 1, col, n, maze, visited))
//     {

//         solve(row - 1, col, n, maze, visited, ans);
//     }
//     if (isSafe(row, col + 1, n, maze, visited))

//     {

//         solve(row, col + 1, n, maze, visited, ans);
//     }
//     if (isSafe(row, col - 1, n, maze, visited))
//     {

//         solve(row, col - 1, n, maze, visited, ans);
//     }
//     visited[row][col] = 0;
// }
// int main()
// {
//     cout << "Enter the input: " << endl;
//     int n;
//     cin >> n;

//     vector<vector<int>> maze(n, vector<int>(n));
//     vector<vector<int>> visited(n, vector<int>(n, 0));
//     vector<vector<vector<int>>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> maze[i][j];
//         }
//         cout << endl;
//     }

//     // Optional safety check
//     if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
//     {
//         cout << "No path possible\n";
//         return 0;
//     }

//     // int maze[10][10] = {

//     //     {1, 1, 0},
//     //     {1, 1, 0},
//     //     {0, 1, 1}};

//     cout << "Print" << endl;

//     solve(0, 0, n, maze, visited, ans);
//     for (auto &rat : ans)
//     {
//         for (auto vis : rat)
//         {
//             for (auto elm : vis)
//             {
//                 cout << elm << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Check valid move
// bool isSafe(int x, int y, int n, int maze[3][3], int visited[3][3])
// {
//     return (x >= 0 && y >= 0 && x < n && y < n &&
//             maze[x][y] == 1 && visited[x][y] == 0);
// }

// // Print matrix
// void printMatrix(int visited[3][3], int n)
// {
//     cout << "Path Matrix:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << visited[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// // Recursive function
// void solve(int maze[3][3], int x, int y, int n, int visited[3][3])
// {
//     // Base case
//     if (x == n - 1 && y == n - 1)
//     {
//         visited[x][y] = 1;
//         printMatrix(visited, n);
//         visited[x][y] = 0; // backtrack
//         return;
//     }

//     // Mark visited
//     visited[x][y] = 1;

//     // Down
//     if (isSafe(x + 1, y, n, maze, visited))
//         solve(maze, x + 1, y, n, visited);

//     // Right
//     if (isSafe(x, y + 1, n, maze, visited))
//         solve(maze, x, y + 1, n, visited);

//     // Up
//     if (isSafe(x - 1, y, n, maze, visited))
//         solve(maze, x - 1, y, n, visited);

//     // Left
//     if (isSafe(x, y - 1, n, maze, visited))
//         solve(maze, x, y - 1, n, visited);

//     // Backtrack
//     visited[x][y] = 0;
// }

// int main()
// {
//     int n = 3;

//     int maze[3][3] = {
//         {1, 1, 0},
//         {1, 1, 0},
//         {0, 1, 1}};

//     int visited[3][3] = {0};

//     solve(maze, 0, 0, n, visited);

//     return 0;
// }

// // for GFG
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     bool isSafe(int x, int y, int n, vector<vector<int>> &maze, vector<vector<int>> &vis)
//     {
//         return (x >= 0 && y >= 0 && x < n && y < n &&
//                 maze[x][y] == 1 && vis[x][y] == 0);
//     }

//     void solve(int x, int y, int n, vector<vector<int>> &maze,
//                vector<vector<int>> &vis, string path, vector<string> &ans)
//     {

//         // Base case
//         if (x == n - 1 && y == n - 1)
//         {
//             ans.push_back(path);
//             return;
//         }

//         vis[x][y] = 1;

//         // Down
//         if (isSafe(x + 1, y, n, maze, vis))
//             solve(x + 1, y, n, maze, vis, path + 'D', ans);

//         // Left
//         if (isSafe(x, y - 1, n, maze, vis))
//             solve(x, y - 1, n, maze, vis, path + 'L', ans);

//         // Right
//         if (isSafe(x, y + 1, n, maze, vis))
//             solve(x, y + 1, n, maze, vis, path + 'R', ans);

//         // Up
//         if (isSafe(x - 1, y, n, maze, vis))
//             solve(x - 1, y, n, maze, vis, path + 'U', ans);

//         // Backtrack
//         vis[x][y] = 0;
//     }

//     vector<string> ratInMaze(vector<vector<int>> &maze)
//     {

//         int n = maze.size();
//         vector<string> ans;

//         // Edge case
//         if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
//             return ans;

//         vector<vector<int>> vis(n, vector<int>(n, 0));

//         solve(0, 0, n, maze, vis, "", ans);

//         return ans;
//     }
// };

// int main()
// {
//     int n;
//     cout << "Enter size n: ";
//     cin >> n;

//     vector<vector<int>> maze(n, vector<int>(n));

//     cout << "Enter maze (0/1):\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> maze[i][j];
//         }
//     }

//     Solution obj;
//     vector<string> result = obj.ratInMaze(maze);

//     if (result.empty())
//     {
//         cout << "No path found\n";
//     }
//     else
//     {
//         cout << "Paths:\n";
//         for (auto &path : result)
//         {
//             cout << path << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isSafe(int x, int y, int n, vector<vector<int>> &maze, vector<vector<int>> &vis)
    {
        return (x >= 0 && y >= 0 && x < n && y < n &&
                maze[x][y] == 1 && vis[x][y] == 0);
    }

    void solve(int x, int y, int n, vector<vector<int>> &maze,
               vector<vector<int>> &vis, string path, vector<string> &ans)
    {

        // Base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        vis[x][y] = 1;

        // Down
        if (isSafe(x + 1, y, n, maze, vis))
            solve(x + 1, y, n, maze, vis, path + 'D', ans);

        // Left
        if (isSafe(x, y - 1, n, maze, vis))
            solve(x, y - 1, n, maze, vis, path + 'L', ans);

        // Right
        if (isSafe(x, y + 1, n, maze, vis))
            solve(x, y + 1, n, maze, vis, path + 'R', ans);

        // Up
        if (isSafe(x - 1, y, n, maze, vis))
            solve(x - 1, y, n, maze, vis, path + 'U', ans);

        // Backtrack
        vis[x][y] = 0;
    }

    vector<string> ratInMaze(vector<vector<int>> &maze)
    {

        int n = maze.size();
        vector<string> ans;

        // Edge case
        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
            return ans;

        vector<vector<int>> vis(n, vector<int>(n, 0));
        string result;
        solve(0, 0, n, maze, vis, result, ans);

        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter size n: ";
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));

    cout << "Enter maze (0/1):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
        cout << endl;
    }

    Solution obj;
    vector<string> result = obj.ratInMaze(maze);

    if (result.empty())
    {
        cout << "No path found\n";
    }
    else
    {
        cout << "Paths:\n";
        for (auto &path : result)
        {
            cout << path << endl;
        }
    }

    return 0;
}