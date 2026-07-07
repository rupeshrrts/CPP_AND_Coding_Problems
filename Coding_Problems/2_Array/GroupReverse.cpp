// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> v = {3, 4, 6, 5, 2, 7, 9, 4, 91, 56};

//     int k;
//     cin >> k;

//     int n = v.size();

//     for (int i = 0; i < n; i += k)
//     {
//         int s = i;
//         int e = min(i + k - 1, n - 1);

//         while (s < e)
//         {
//             swap(v[s++], v[e--]);
//         }
//     }

//     // print result
//     for (int x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// gfg reverse in group

// class Solution
// {
// public:
//     vector<int> reverseKGroup(vector<int> &nums, int k)
//     {
//         int n = nums.size();

//         for (int i = 0; i < n; i += k)
//         {
//             int left = i;
//             int right = min(i + k - 1, n - 1);

//             while (left < right)
//             {
//                 swap(nums[left++], nums[right--]);
//             }
//         }

//         return nums;
//     }
// };