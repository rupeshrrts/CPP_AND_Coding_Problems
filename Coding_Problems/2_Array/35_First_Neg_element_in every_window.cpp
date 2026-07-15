// // gfg
// class Solution
// {
// public:
//     vector<int> firstNegInt(vector<int> &arr, int k)
//     {

//         // code here

//         int n = arr.size();
//         deque<int> dq;

//         vector<int> ans;

//         // for first window
//         for (int i = 0; i < k; i++)
//         {
//             if (arr[i] < 0)
//             {
//                 dq.push_back(i);
//             }
//         }

//         // add element in answer
//         if (!dq.empty())
//         {
//             ans.push_back(arr[dq.front()]);
//         }
//         else
//         {
//             ans.push_back(0);
//         }

//         for (int i = k; i < n; i++)
//         {
//             // remove
//             if (!dq.empty() && dq.front() == i - k)
//             {
//                 dq.pop_front();
//             }

//             // Add

//             if (arr[i] < 0)
//             {
//                 dq.push_back(i);
//             }

//             // add element in answer
//             if (!dq.empty())
//             {
//                 ans.push_back(arr[dq.front()]);
//             }
//             else
//             {
//                 ans.push_back(0);
//             }
//         }
//         return ans;
//     }
// };