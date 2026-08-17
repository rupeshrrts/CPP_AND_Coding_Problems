// class Solution
// {
// public:
//     int findEquilibrium(vector<int> &nums)
//     {
//         // code here
//         int n = nums.size();
//         int leftSum = 0;
//         int rightSum = 0;
//         // to calculate total Sum
//         for (int x : nums)
//         {
//             rightSum += x;
//         }

//         // actual logic
//         for (int i = 0; i < n; i++)
//         {
//             rightSum -= nums[i];
//             if (leftSum == rightSum)
//             {
//                 return i;
//             }
//             leftSum += nums[i];
//         }
//         return -1;
//     }
// };