// gfg and leetcode problem 34

// class Solution
// {
// public:
//     int firstSearch(vector<int> &arr, int k)
//     {

//         int n = arr.size();
//         int s = 0;
//         int e = n - 1;
//         int ans = -1;
//         while (s <= e)
//         {
//             int mid = s + (e - s) / 2;

//             if (arr[mid] == k)
//             {
//                 ans = mid;
//                 e = mid - 1; // this is the main concept to find the first occurence of the element in the array
//             }
//             else if (arr[mid] > k)
//             {
//                 e = mid - 1;
//             }
//             else
//             {
//                 s = mid + 1;
//             }
//         }
//         return ans;
//     }

//     int lastSearch(vector<int> &arr, int k)
//     {

//         int n = arr.size();
//         int s = 0;
//         int e = n - 1;
//         int ans = -1;
//         while (s <= e)
//         {
//             int mid = s + (e - s) / 2;

//             if (arr[mid] == k)
//             {
//                 ans = mid;
//                 s = mid + 1; // this is the main concept to find the last occurence of the element in the array
//             }
//             else if (arr[mid] > k)
//             {
//                 e = mid - 1;
//             }
//             else
//             {
//                 s = mid + 1;
//             }
//         }
//         return ans;
//     }

//     vector<int> find(vector<int> &arr, int x)
//     {
//         // code here

//         vector<int> v;
//         v.push_back(firstSearch(arr, x));
//         v.push_back(lastSearch(arr, x));

//         return v;
//     }
// };