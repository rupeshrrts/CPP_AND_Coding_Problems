// 152  Maximum product subaarray

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//          int n = nums.size();
//         int Prod =1;
//         int max = nums[0];
//         for(int i=0; i<n;i++){

//             Prod*=nums[i];

//             if(Prod>max){
//                 max=Prod;
//             }

//             if(Prod<0){
//                 Prod=1;
//             }
//         }
//         return max;
//     }
// };

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n = nums.size();
//         int ans = nums[0];
//         int ma=nums[0];
//         int mi = nums[0];
//         for(int i=1;i<n;i++){
//             if(nums[i]<0){
//                 swap(ma,mi);
//             }
//             ma = max(nums[i],ma*nums[i]);
//             mi = min(nums[i],mi*nums[i]);
//             ans = max(ans,ma);
//         }
//         return ans;
//     }
// };
