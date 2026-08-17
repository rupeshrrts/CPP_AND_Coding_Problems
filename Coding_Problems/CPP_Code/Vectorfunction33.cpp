// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v; // empty vector

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

// // 2D array
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<vector<int>> v(3, vector<int>(3, 0));

//     v[1][1] = 5;

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v[i].size(); j++)
//         {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // 3️⃣ Vector of Strings (IMPORTANT for N-Queens)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<string> board(3, string(3, '.'));

//     board[1][2] = 'Q';

//     for (int i = 0; i < board.size(); i++)
//     {
//         cout << board[i] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int add(int a, int b)
// {
//     return a + b;   // returns integer
// }

// int main()
// {
//     int result = add(5, 3);

//     cout << result;

//     return 0;
// }

// // 4️⃣ Function Returning Vector (VERY IMPORTANT)
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> getNumbers() // just like intgetNumber()
// {
//     // vector<int> v;
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);
//     // return v;
//     vector<int> v1;
//     v1.push_back(6);
//     v1.push_back(7);
//     return v1;
// }

// int main()
// {
//     vector<int> result = getNumbers();

//     for (int x : result)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// // function returning 2D vector
// vector<vector<int>> createMatrix()
// {
//     vector<vector<int>> mat = {{1, 2}, {3, 4}};

//     return mat;
// }

// int main()
// {
//     vector<vector<int>> result = createMatrix();

//     for (int i = 0; i < result.size(); i++)
//     {
//         for (int j = 0; j < result[i].size(); j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// // function returning 2D vector
// vector<vector<string>> createMatrix(int n)
// {
//     vector<vector<string>> mat(n, vector<string>(n, "."));

//     return mat;
// }

// int main()
// {
//     vector<vector<string>> result = createMatrix(4);

//     for (int i = 0; i < result.size(); i++)
//     {
//         for (int j = 0; j < result[i].size(); j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<vector<string>> createBoard()
{
    vector<vector<string>> board;

    vector<string> b1 = {
        ".Q..",
        "...Q",
        "Q...",
        "..Q."};

    vector<string> b2 = {
        "..Q.",
        "Q...",
        "...Q",
        ".Q.."};

    board.push_back(b1);
    board.push_back(b2);

    return board;
}

int main()
{
    vector<vector<string>> result = createBoard();

    for (int i = 0; i < result.size(); i++)
    {
        cout << "Solution " << i + 1 << ":\n";

        for (auto row : result[i])
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}