// // merge Sorted Array
// // for this is the main concept

// // vector<int> temp;
// // int i = 0;
// // int j = 0;
// // while (i < m && j < n)
// // {
// //     if (nums1[i] <= nums2[j])
// //     {
// //         temp.push_back(nums1[i++]);
// //     }
// //     else
// //     {
// //         temp.push_back(nums2[j++]);
// //     }
// // }

// // while (i < m)
// //     temp.push_back(nums1[i++]);
// // while (j < n)
// // {
// //     temp.push_back(nums2[j++]);
// // }

// // for (int k = 0; k < m + n; k++)
// // {
// //     nums1[k] = temp[k];
// // }

// // class Solution {
// // public:
// //     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// //         int i = 0;
// //         int j = 0;
// //         int k = 0;
// //         while(i<m&&j<n){
// //             if(nums1[i]<=nums2[j]){
// //                 nums1[k]=nums1[i];
// //                 i++;
// //                 k++;
// //             }
// //             else{
// //                 nums1[k]=nums2[j];
// //                 j++;
// //                 k++;
// //             }
// //         }

// //         while(j<n){
// //             nums1[k]=nums2[j];
// //             j++;
// //             k++;
// //         }

// //         // sort(nums1.begin(),nums1.end());
// //     }
// // };

// class Solution
// {
// public:
//     void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
//     {
//         vector<int> temp;
//         int i = 0;
//         int j = 0;
//         while (i < m && j < n)
//         {
//             if (nums1[i] <= nums2[j])
//             {
//                 temp.push_back(nums1[i++]);
//             }
//             else
//             {
//                 temp.push_back(nums2[j++]);
//             }
//         }

//         while (i < m)
//             temp.push_back(nums1[i++]);
//         while (j < n)
//         {
//             temp.push_back(nums2[j++]);
//         }

//         for (int k = 0; k < m + n; k++)
//         {
//             nums1[k] = temp[k];
//         }
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> temp;

        int i = 0;
        int j = 0;

        // Merge both arrays
        while (i < m && j < n)
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

        // Copy remaining elements of nums1
        while (i < m)
        {
            temp.push_back(nums1[i++]);
        }

        // Copy remaining elements of nums2
        while (j < n)
        {
            temp.push_back(nums2[j++]);
        }

        // Copy merged array back to nums1
        for (int k = 0; k < m + n; k++)
        {
            nums1[k] = temp[k];
        }
    }
};

int main()
{

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    int m = 3;
    int n = 3;

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int x : nums1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
