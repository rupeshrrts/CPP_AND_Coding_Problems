// 88 merge sorted array

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0, k = 0;
        vector<int> v(m + n);

        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                v[k++] = nums1[i++];
            }
            else
            {
                v[k++] = nums2[j++];
            }
        }

        while (i < m)
        {
            v[k++] = nums1[i++];
        }

        while (j < n)
        {
            v[k++] = nums2[j++];
        }

        nums1 = v;
    }
};

int main()
{
    Solution obj;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // extra space
    vector<int> nums2 = {2, 5, 6};

    int m = 3;
    int n = 3;

    obj.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1)
    {
        cout << x << " ";
    }

    return 0;
}