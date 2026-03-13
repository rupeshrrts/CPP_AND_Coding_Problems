// // return powerset of a set
// #include <iostream>
// #include <vector>
// using namespace std;

// void Power(int index, int size, int *arr, vector<vector<int>> &ans, vector<int> curr)
// {
//     if (index == size)
//     {
//         ans.push_back(curr);
//         return;
//     }

//     // Exclude current element
//     Power(index + 1, size, arr, ans, curr);

//     // Include current element
//     curr.push_back(arr[index]);
//     Power(index + 1, size, arr, ans, curr);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int *arr = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<vector<int>> ans;
//     vector<int> curr;

//     Power(0, n, arr, ans, curr);

//     for (auto vec : ans)
//     {
//         cout << "{ ";
//         for (auto elem : vec)
//         {
//             cout << elem << " ";
//         }
//         cout << "}" << endl;
//     }
// }

// 2. write all the permutation of the given string
#include <iostream>
#include <vector>
using namespace std;
void permute(int index, string input, vector<string> &ans)
{
    if (index == input.size())
    {
        ans.push_back(input);
        return;
    }
    for (int j = index; j < input.size(); j++)
    {
        swap(input[index], input[j]);
        permute(index + 1, input, ans);
        swap(input[index], input[j]);
    }
}
int main()
{
    string input;
    cin >> input;
    vector<string> ans;
    permute(0, input, ans);
    for (auto elem : ans)
    {
        cout << elem << endl;
    }
}