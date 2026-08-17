// // leet code
// class Solution
// {
// public:
//     vector<int> productExceptSelf(vector<int> &nums)
//     {

//         int n = nums.size();
//         int *pre = new int[n];
//         int *post = new int[n];

//         pre[0] = nums[0];
//         post[n - 1] = nums[n - 1];

//         // calculate pre
//         for (int i = 1; i < n; i++)
//         {
//             pre[i] = pre[i - 1] * nums[i];
//         }

//         // calcilate post
//         for (int i = n - 2; i >= 0; i--)
//         {
//             post[i] = post[i + 1] * nums[i];
//         }

//         // for anser hab to return vector
//         vector<int> ans(n);
//         for (int i = 0; i < n; i++)
//         {
//             if (i == 0)
//                 ans[i] = post[i + 1];
//             else if (i == n - 1)
//                 ans[i] = pre[i - 1];
//             else

//                 // calculate each value of ans array
//                 ans[i] = pre[i - 1] * post[i + 1];
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
    vector<int> productExceptSelf(vector<int> &nums)
    {

        int n = nums.size();

        int *pre = new int[n];
        int *post = new int[n];

        // Prefix product
        pre[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] * nums[i];
        }

        // Suffix product
        post[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            post[i] = post[i + 1] * nums[i];
        }

        vector<int> ans(n);

        // Calculate answer
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                ans[i] = post[i + 1];
            else if (i == n - 1)
                ans[i] = pre[i - 1];
            else
                ans[i] = pre[i - 1] * post[i + 1];
        }

        delete[] pre;
        delete[] post;

        return ans;
    }
};

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.productExceptSelf(nums);

    cout << "Product Except Self: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}