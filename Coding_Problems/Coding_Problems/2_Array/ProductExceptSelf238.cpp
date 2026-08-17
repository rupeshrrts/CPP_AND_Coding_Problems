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

        pre[0] = nums[0];
        post[n - 1] = nums[n - 1];

        // calculate pre
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] * nums[i];
        }

        // calcilate post
        for (int i = n - 2; i >= 0; i--)
        {
            post[i] = post[i + 1] * nums[i];
        }

        // for ans to return vector
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                ans[i] = post[i + 1];
            else if (i == n - 1)
                ans[i] = pre[i - 1];
            else
                // calculate each value of ans array
                ans[i] = pre[i - 1] * post[i + 1];
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = obj.productExceptSelf(nums);

    cout << "Output: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}

// best solution

// answer[i] = (left side ka product) × (right side ka product)
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 1);

        int left = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
};