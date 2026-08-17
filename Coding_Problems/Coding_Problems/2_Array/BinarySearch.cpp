// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         int n = nums.size();

//         int left = 0, right = n - 1;

//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2; // ✅ inside loop

//             if (nums[mid] == target)
//             {
//                 return mid;
//             }
//             else if (nums[mid] > target)
//             {
//                 right = mid - 1;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
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
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int result = obj.search(nums, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}