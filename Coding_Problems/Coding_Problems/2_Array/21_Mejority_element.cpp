// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         for (int i = 0; i < nums.size(); i++) {
//              int count=0;
//             for(int j=0;j<nums.size();j++){
//                 if(nums[i]==nums[j])
//                 {
//                     count++;
//                 }
//             }
//             if(count>nums.size()/2)
//             return nums[i];
//         }
//         return -1;
//     }
// };

// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {

//         unordered_map<int, int> mapp;
//         for (int num : nums)
//         {
//             mapp[num]++;
//         }

//         for (auto it : mapp)
//         {
//             if (it.second > nums.size() / 2)

//                 return it.first;
//         }
//         return -1;
//     }
// };

// full code

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        unordered_map<int, int> freq;

        // Count the frequency of each element
        for (int num : nums)
        {
            freq[num]++;
        }

        // Find the majority element
        for (auto it : freq)
        {
            if (it.second > nums.size() / 2)
            {
                return it.first;
            }
        }

        return -1; // Will never execute because majority element always exists
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int ans = obj.majorityElement(nums);

    cout << "Majority Element = " << ans << endl;

    return 0;
}