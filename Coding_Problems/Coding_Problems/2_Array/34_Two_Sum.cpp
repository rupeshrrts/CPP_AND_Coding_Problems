// 1 Two Sum Leet code
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         int n = nums.size();

//         for(int i = 0; i < n; i++) {

//             for(int j = i + 1; j < n; j++) {

//                 if(nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }

//         return {};
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         int n = nums.size();

//         for(int i = 0; i < n; i++) {
//             int com = target - nums[i];

//             for(int j = i + 1; j < n; j++) {

//                 if(nums[j] == com) {
//                     return {i,j};
//                 }
//             }
//         }

//         return {};
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         int n = nums.size();
//         unordered_map<int,int> mp;
//         for(int i = 0; i < n; i++) {
//             int compla = target - nums[i];
//             if(mp.find(compla)!=mp.end()){
//                 return {mp[compla],i};
//             }
//              mp[nums[i]]=i;
//         }

//         return {};
//     }
// };