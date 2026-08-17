// 167. Two Sum II - Input Array Is Sorted

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         int l = 0;
//         int r = nums.size()-1;

//         while (l < r) {
//             int sum = nums[l] + nums[r];

//             if (sum == target)
//                 return {l+1, r+1};

//             else if (sum > target)
//                 r--;

//             else
//                 l++;
//         }

//         return {-1, -1};
//     }
// };