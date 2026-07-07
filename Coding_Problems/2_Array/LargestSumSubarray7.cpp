// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;
// int main()
// {
//     vector<int> v = {5, 4, 3, -6, 1, 3, 2, -2, -3, -4};

//     int n = v.size();
//     int maxSUM = INT_MIN;
//     int l;
//     int p;

//         for (int i = 0; i < n; i++)
//     {
//         /* code */

//         for (int j = i; j < n; j++)
//         {
//             /* code */

//             int sum = 0;

//             for (int k = i; k < j; k++)
//             {
//                 sum = sum + v[k];
//             }

//             if (sum > maxSum)
//             {
//                 /* code */
//                 maxSum = sum;
//                 l = i;
//                 p = j;
//             }
//         }
//     }

//     cout << "Max sum is: " << max << endl;

//     for (int i = l; i < p; i++)
//     {
//         /* code */
//         cout << v[i] << "  ";
//     }
// }

// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;
// int main()
// {
//     vector<int> v = {5, 2, -3, -6, 1, 3, 2, -2, -3, -4};

//     int n = v.size();
//     int maxSum = INT_MIN;
//     int l;
//     int p;

//     int *pre = new int[n];
//     for (int i = 0; i < n; i++)
//     {

//         if (i == 0)
//             pre[i] = v[i];
//         else
//             pre[i] = pre[i - 1] + v[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         /* code */

//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             /* code */
//             // if (i == 0)
//             // {
//             //     sum = pre[0];
//             // }

//             // else
//             // {
//             //     sum = pre[j] + pre[i - 1];
//             // }

//             if (i == 0)
//                 sum = pre[j];
//             else
//                 sum = pre[j] - pre[i - 1];

//             if (sum > maxSum)
//             {

//                 maxSum = sum;
//                         }
//         }
//     }

//     cout << maxSum;
// }

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxSum = INT_MIN;

        // prefix array
        vector<int> pre(n);

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                pre[i] = nums[i];
            else
                pre[i] = pre[i - 1] + nums[i];
        }

        // same logic as your code
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum;

                if (i == 0)
                    sum = pre[j];
                else
                    sum = pre[j] - pre[i - 1];

                if (sum > maxSum)
                {
                    maxSum = sum;
                }
            }
        }

        return maxSum;
    }
};

int main()
{
    vector<int> nums = {5, 4, 3, -6, 1, 3, 2, -2, -3, -4};

    Solution obj;
    int result = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}