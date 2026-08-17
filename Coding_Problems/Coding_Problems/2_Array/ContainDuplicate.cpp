// 217 Contain Duplicates leet code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 2, 3, 4, 5, 2}; // test case

    if (obj.containsDuplicate(nums))
    {
        cout << "Duplicate exists" << endl;
    }
    else
    {
        cout << "No duplicate" << endl;
    }

    return 0;
}