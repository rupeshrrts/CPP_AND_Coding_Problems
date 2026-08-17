// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         for(int i =0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]==nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// not batter approach

// class Solution
// {
// public:
//     bool containsDuplicate(vector<int> &nums)
//     {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < n - 1; i++)
//         { // n-1 bca when compare nums[i]==nums[i+1] then if i=n-1(last element) then n means out of bound overflow
//             if (nums[i] == nums[i + 1])
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };