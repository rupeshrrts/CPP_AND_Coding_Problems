// merge sort conceot used

// class Solution
// {
// public:
//     double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
//     {
//         vector<int> temp;

//         int i = 0;
//         int j = 0;

//         while (i < nums1.size() && j < nums2.size())
//         {

//             if (nums1[i] <= nums2[j])
//                 temp.push_back(nums1[i++]);
//             else
//                 temp.push_back(nums2[j++]);
//         }

//         while (i < nums1.size())
//             temp.push_back(nums1[i++]);

//         while (j < nums2.size())
//             temp.push_back(nums2[j++]);

//         int n = temp.size();
//         if (n % 2 == 0)
//         {
//             return (temp[n / 2] + temp[n / 2 - 1]) / 2.0;
//         }

//         return temp[n / 2];
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> temp;

        int i = 0;
        int j = 0;

        // Merge both sorted arrays
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] <= nums2[j])
            {
                temp.push_back(nums1[i++]);
            }
            else
            {
                temp.push_back(nums2[j++]);
            }
        }

        // Copy remaining elements
        while (i < nums1.size())
        {
            temp.push_back(nums1[i++]);
        }

        while (j < nums2.size())
        {
            temp.push_back(nums2[j++]);
        }

        int n = temp.size();

        // If total elements are even
        if (n % 2 == 0)
        {
            return (temp[n / 2] + temp[n / 2 - 1]) / 2.0;
        }

        // If total elements are odd
        return temp[n / 2];
    }
};

int main()
{

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    Solution obj;

    double median = obj.findMedianSortedArrays(nums1, nums2);

    cout << "Median = " << median << endl;

    return 0;
}
