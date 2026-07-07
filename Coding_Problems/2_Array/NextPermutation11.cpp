#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// this is also a solution
//   void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(),nums.end());
//     }

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int n = nums.size();
        int bpt = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                bpt = i;
                break;
            }
        }

        if (bpt == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        int j = 0;
        for (j = n - 1; j > bpt; j--)
        {
            if (nums[j] > nums[bpt])
            {
                break;
            }
        }

        swap(nums[j], nums[bpt]);
        reverse(nums.begin() + bpt + 1, nums.end());
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    obj.nextPermutation(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}