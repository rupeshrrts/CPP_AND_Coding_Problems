
// 724. Find Pivot Index     leet code

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {

//         int n = nums.size();
//         int leftSum=0;
//         int rightSum=0;
//         int totalSum=0;
//         // to calculate total Sum
//         for(int x:nums){
//             totalSum+=x;
//         }

//         // actual logic
//         for(int i=0;i<n;i++){
//             rightSum=totalSum-leftSum-nums[i];
//             if(leftSum==rightSum){
//                 return i;
//             }
//             leftSum+=nums[i];
//         }
//         return -1;
//     }
// };

// //// second solution
// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {

//         int n = nums.size();
//         int leftSum=0;
//         int rightSum=0;
//         // to calculate total Sum
//         for(int x:nums){
//             rightSum+=x;
//         }

//         // actual logic
//         for(int i=0;i<n;i++){
//             rightSum-=nums[i];
//             if(leftSum==rightSum){
//                 return i;
//             }
//             leftSum+=nums[i];
//         }
//         return -1;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        int n = nums.size();
        int leftSum = 0;
        int totalSum = 0;

        // Step 1: calculate total sum
        for (int x : nums)
        {
            totalSum += x;
        }

        // Step 2: find pivot index
        for (int i = 0; i < n; i++)
        {
            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum)
            {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int result = obj.pivotIndex(nums);

    if (result != -1)
        cout << "Pivot Index: " << result << endl;
    else
        cout << "No Pivot Index found" << endl;

    return 0;
}