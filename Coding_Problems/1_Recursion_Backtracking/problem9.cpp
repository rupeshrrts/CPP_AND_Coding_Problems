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

//     //  vector<int> arr(n);

//     // for(int i=0;i<n;i++)
//     //     cin>>arr[i];

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

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int total = 1 << n; // 2^n

//     for (int mask = 0; mask < total; mask++)
//     {
//         cout << "{ ";

//         for (int i = 0; i < n; i++)
//         {
//             if (mask & (1 << i))
//                 cout << arr[i] << " ";
//         }

//         cout << "}" << endl;
//     }
// }
