// // gfg

// class Solution
// {
// public:
//     bool subArrayExists(vector<int> &arr)
//     {

//         unordered_set<int> st;

//         int prefixSum = 0;

//         for (int i = 0; i < arr.size(); i++)
//         {

//             prefixSum += arr[i];

//             if (prefixSum == 0)
//                 return true;

//             if (st.count(prefixSum))
//                 return true;

//             st.insert(prefixSum);
//         }

//         return false;
//     }
// };