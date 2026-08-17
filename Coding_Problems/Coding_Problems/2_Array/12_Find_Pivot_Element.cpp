// // Prefix and sufix Sum
// // Find Pivot Index 724

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

// full code
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
        int rightSum = 0;

        // Calculate total sum
        for (int x : nums)
        {
            rightSum += x;
        }

        // Find pivot index
        for (int i = 0; i < n; i++)
        {
            rightSum -= nums[i];

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

    int ans = obj.pivotIndex(nums);

    if (ans != -1)
        cout << "Pivot Index: " << ans << endl;
    else
        cout << "Pivot Index not found" << endl;

    return 0;
}