// // Prefix Sum based Question
// class Solution
// {
// public:
//     vector<int> runningSum(vector<int> &nums)
//     {
//         int n = nums.size();
//         // int *runSum = new int[n];
//         vector<int> runSum(n);
//         runSum[0] = nums[0];
//         for (int i = 1; i < n; i++)
//         {
//             runSum[i] = runSum[i - 1] + nums[i];
//         }
//         return runSum;
//     }
// };

// #include <iostream>
// #include <vector>
// using namespace std;

// // LeetCode Solution
// class Solution
// {
// public:
//     vector<int> runningSum(vector<int> &nums)
//     {
//         int n = nums.size();

//         vector<int> runSum(n);
//         runSum[0] = nums[0];

//         for (int i = 1; i < n; i++)
//         {
//             runSum[i] = runSum[i - 1] + nums[i];
//         }

//         return runSum;
//     }
// };

// int main()
// {
//     vector<int> nums = {1, 2, 3, 4};

//     Solution obj;
//     vector<int> ans = obj.runningSum(nums);

//     cout << "Running Sum: ";
//     for (int x : ans)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    Solution obj;
    vector<int> ans = obj.runningSum(nums);

    cout << "Running Sum: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
