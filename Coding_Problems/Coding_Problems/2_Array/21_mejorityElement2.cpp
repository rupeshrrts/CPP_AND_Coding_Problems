// leetocde_229

// class Solution
// {
// public:
//     vector<int> majorityElement(vector<int> &nums)
//     {
//         unordered_map<int, int> mapp;
//         vector<int> res1;
//         for (int num : nums)
//         {
//             mapp[num]++;
//         }

//         for (auto it : mapp)
//         {
//             if (it.second > nums.size() / 3)
//             {
//                 res1.push_back(it.first);
//             }
//         }

//         return res1;
//     }
// };

// // this is gfg code
// class Solution {
//   public:
//     vector<int> findMajority(vector<int>& arr) {
//         // code here
//         unordered_map<int,int> mapp;
//         vector<int>res;

//         for(int num:arr){
//             mapp[num]++;
//         }

//         for(auto it : mapp){
//             if(it.second>arr.size()/3){
//                 res.push_back(it.first);
//             }
//         }
//         sort(res.begin(),res.end());
//         return res;
//     }

// };