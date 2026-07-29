// // https://leetcode.com/problems/merge-intervals/description/   56 leetcode

// class Solution
// {
// public:
//     vector<vector<int>> merge(vector<vector<int>> &a)
//     {

//         sort(a.begin(), a.end());

//         stack<pair<int, int>> st;
//         st.push({a[0][0], a[0][1]});

//         int n = a.size();

//         for (int i = 1; i < n; i++)
//         {

//             int s1 = st.top().first;
//             int e1 = st.top().second;

//             int s2 = a[i][0];
//             int e2 = a[i][1];

//             if (e1 < s2)
//             {
//                 st.push({s2, e2});
//             }
//             else
//             {
//                 st.pop();
//                 st.push({s1, max(e1, e2)});
//             }
//         }

//         vector<vector<int>> ans;

//         while (!st.empty())
//         {
//             ans.push_back({st.top().first, st.top().second});
//             st.pop();
//         }

//         reverse(ans.begin(), ans.end());

//         return ans;
//     }
// };