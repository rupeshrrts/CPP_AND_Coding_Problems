// // all zeroes at the end

// // 283. Move Zeroes

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     void moveZeroes(vector<int> &nums)
//     {
//         int k = 0;

//         // Move non-zero elements forward
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] != 0)
//             {
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }

//         // Fill remaining positions with 0
//         for (int i = k; i < nums.size(); i++)
//         {
//             nums[i] = 0;
//         }
//     }
// };

// int main()
// {
//     vector<int> nums = {0, 1, 0, 3, 12};

//     Solution obj;
//     obj.moveZeroes(nums);

//     cout << "Output: ";
//     for (int num : nums)
//     {
//         cout << num << " ";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void solve(int index, int &k, vector<int> &nums)
    {
        if (index == nums.size())
            return;

        if (nums[index] != 0)
        {
            nums[k] = nums[index];
            k++;
        }

        solve(index + 1, k, nums);
    }

    void moveZeroes(vector<int> &nums)
    {
        int k = 0;
        int index = 0;

        solve(index, k, nums);

        // Fill remaining positions with 0
        for (int i = k; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution obj;
    obj.moveZeroes(nums);

    cout << "Output: ";
    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}