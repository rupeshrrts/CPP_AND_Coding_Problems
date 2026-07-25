// // leetcode https://leetcode.com/problems/sliding-window-maximum/

// // class Solution {
// // public:
// //     vector<int> maxSlidingWindow(vector<int>& nums, int k) {

// //         // vector<int> ans;
// //         // int n = nums.size();
// //         // for(int i=0;i<n-k+1;i++){
// //         //     int maxi = nums[i];

// //         //     for(int j=i;j<i+k;j++){
// //         //         maxi=max(maxi,nums[j]);
// //         //     }
// //         //     ans.push_back(maxi);
// //         // }
// //         // return ans;

// //     }
// // };

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {

//         deque<int> dq;
//         vector<int> ans;

//         for (int i = 0; i < nums.size(); i++) {

//             // Remove indices outside the current window
//             if (!dq.empty() && dq.front() == i - k)
//                 dq.pop_front();

//             // Remove all smaller elements
//             while (!dq.empty() && nums[dq.back()] < nums[i])
//                 dq.pop_back();

//             // Add current index
//             dq.push_back(i);

//             // Store answer after first window
//             if (i >= k - 1)
//                 ans.push_back(nums[dq.front()]);
//         }

//         return ans;
//     }
// };