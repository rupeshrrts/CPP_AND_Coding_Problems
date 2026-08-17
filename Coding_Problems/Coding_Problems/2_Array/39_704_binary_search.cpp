// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         int n = nums.size();

//         int left = 0, right = n - 1, mid;
//         while (left <= right)
//         {
//             mid = left + (right - left) / 2;

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
        int n = nums.size();

        int left = 0;
        int right = n - 1;

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

    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int ans = obj.search(nums, target);

    cout << "Index = " << ans << endl;

    return 0;
}