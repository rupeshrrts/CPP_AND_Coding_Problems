
// segrigate -Ve and +ve
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void SegreGate(vector<int> &nums)
    {
        vector<int> poss, neg;
        if (nums.size() == 0)
        {
            return;
        }
        for (int x : nums)
        {
            if (x < 0)
                neg.push_back(x);
            else
                poss.push_back(x);
        }
        sort(poss.begin(), poss.end());
        sort(neg.begin(), neg.end());

        // merge back
        int k = 0;

        for (int x : neg)
            nums[k++] = x;

        for (int x : poss)
            nums[k++] = x;

        //     void segregateElements(vector<int>& arr) {
        //     int n;
        //     n = arr.size();

        //     int* a = new int[n];
        //     int j = 0;

        //     // First store non-negative elements
        //     for (int i = 0; i < n; i++) {
        //         if (arr[i] >= 0)
        //             a[j++] = arr[i];
        //     }

        //     // Then store negative elements
        //     for (int i = 0; i < n; i++) {
        //         if (arr[i] < 0)
        //             a[j++] = arr[i];
        //     }

        //     // Copy back to original array
        //     for (int i = 0; i < n; i++)
        //         arr[i] = a[i];
        // }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {0, -4, 8, -7, 6, 2};
    obj.SegreGate(nums);

    for (auto elem : nums)
    {
        cout << elem << " " << endl;
    }
}
