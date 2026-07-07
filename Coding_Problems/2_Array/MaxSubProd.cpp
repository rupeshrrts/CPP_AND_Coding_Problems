// class Solution
// {
// public:
//     int maxProduct(vector<int> &nums)
//     {

//         int ans = nums[0];
//         int maxm = nums[0];
//         int minm = nums[0];
//         int n = nums.size();

//         for (int i = 1; i < n; i++)
//         {
//             if (nums[i] < 0)
//                 swap(maxm, minm);

//             maxm = max(nums[i], maxm * nums[i]);
//             minm = min(nums[i], minm * nums[i]);

//             ans = max(maxm, ans);
//         }
//         return ans;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {

        int ans = nums[0];
        int maxm = nums[0];
        int minm = nums[0];
        int n = nums.size();

        for (int i = 1; i < n; i++)
        {
            if (nums[i] < 0)
                swap(maxm, minm);

            maxm = max(nums[i], maxm * nums[i]);
            minm = min(nums[i], minm * nums[i]);

            ans = max(ans, maxm);
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {2, 3, -2, 4};

    int result = obj.maxProduct(nums);

    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}