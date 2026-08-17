// Count Distinct Elements in Every Window - GFG

// 1 Store first window element count in map
// 2 Store the size of map in answer vector
// 3 Remove the first element of window from map which is out of the window
// 4 if element count is 1 then remove the element from map otherwise decrease the count of element in map
// 5 Add the new element of window in map

// class Solution
// {
// public:
//     vector<int> countDistinct(vector<int> &arr, int k)
//     {
//         // code here

//         int n = arr.size();
//         vector<int> ans;
//         unordered_map<int, int> mp;
//         for (int i = 0; i < k; i++)
//         {

//             mp[arr[i]]++;  / add the first window element in map
//         }

//         ans.push_back(mp.size());
//         for (int i = k; i < n; i++)
//         {

//             // Remove the element going out of the window

//             if (mp[arr[i - k]] ==1)
//             {
//                 mp.erase(arr[i - k]);
//             }
//             else{
//                 mp[arr[i-k]]--;
//             }

//             mp[arr[i]]++;

//             ans.push_back(mp.size());
//         }
//         return ans;
//     }
// };