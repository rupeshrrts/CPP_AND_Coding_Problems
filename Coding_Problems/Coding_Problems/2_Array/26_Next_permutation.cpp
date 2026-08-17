// 31 leetcode

// class Solution
// {
// public:
//     void nextPermutation(vector<int> &nums)
//     {

//         int n = nums.size();
//         int bpt = -1;
//         // to find the break point
//         for (int i = n - 2; i >= 0; i--)
//         {
//             if (nums[i] < nums[i + 1])
//             {
//                 bpt = i;
//                 break;
//             }
//         }
//         // agr Bp nhi mila to 4 3 2 1
//         if (bpt == -1)
//         {
//             reverse(nums.begin(), nums.end());
//             return;
//         }
//         // find bp se bda element to swap
//         int j = 0;
//         for (j = n - 1; j > bpt; j--)
//         {
//             if (nums[j] > nums[bpt])
//             {
//                 swap(nums[j], nums[bpt]); /// also can add
//                 break;
//             }
//         }
//         // swap(nums[j],nums[bpt]);
//         reverse(nums.begin() + bpt + 1, nums.end());
//         // return;
//     }
// };