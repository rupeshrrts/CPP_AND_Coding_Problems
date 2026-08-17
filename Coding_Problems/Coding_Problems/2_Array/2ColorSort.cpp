// // color sort
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int c0 = 0;
//         int c1 = 0;
//         int c2 = 0;
//         if (nums.size() == 0)
//         {
//             return;
//         }
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == 0)
//             {
//                 c0++;
//             }
//             if (nums[i] == 1)
//             {
//                 c1++;
//             }
//             if (nums[i] == 2)
//             {
//                 c2++;
//             }
//         }

//         cout << "c0: " << c0 << " c1: " << c1 << " c2: " << c2 << endl;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             nums[i] = 0;
//         }

//         for (int i = c0; i < nums.size(); i++)
//         {
//             nums[i] = 1;
//         }
//         int c3 = c0 + c1;
//         for (int i = c3; i < nums.size(); i++)
//         {
//             nums[i] = 2;
//         }
//     }
// };

// int main()
// {
//     Solution obj;
//     vector<int> nums = {0, 1, 2, 0, 2, 2};
//     obj.sortColors(nums);

//     for (auto elem : nums)
//     {
//         cout << elem << " " << endl;
//     }
// }

//// full code

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int c0 = 0, c1 = 0, c2 = 0;

//         // Count 0s, 1s, and 2s
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == 0)
//                 c0++;
//             if (nums[i] == 1)
//                 c1++;
//             if (nums[i] == 2)
//                 c2++;
//         }

//         int k = 0;

//         // Fill 0s
//         for (int i = 0; i < c0; i++)
//             nums[k++] = 0;

//         // Fill 1s
//         for (int i = 0; i < c1; i++)
//             nums[k++] = 1;

//         // Fill 2s
//         for (int i = 0; i < c2; i++)
//             nums[k++] = 2;
//     }
// };

// int main()
// {
//     vector<int> nums = {2, 0, 2, 1, 1, 0};

//     Solution obj;
//     obj.sortColors(nums);

//     cout << "Sorted array: ";
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }

//     return 0;
// }

// // even odd segrigate
// class Solution
// {
// public:
//     void segregateEvenOdd(vector<int> &arr)
//     {

//         vector<int> even, odd;

//         // separate
//         for (int x : arr)
//         {
//             if (x % 2 == 0)
//                 even.push_back(x);
//             else
//                 odd.push_back(x);
//         }

//         // sort both
//         sort(even.begin(), even.end());
//         sort(odd.begin(), odd.end());

//         // merge back
//         int k = 0;

//         for (int x : even)
//             arr[k++] = x;

//         for (int x : odd)
//             arr[k++] = x;
//     }
// };

// // even odd segrigate
// class Solution
// {
// public:
//     void segregateEvenOdd(vector<int> &arr)
//     {

//         vector<int> even, odd;

//         // separate
//         for (int x : arr)
//         {
//             if (x % 2 == 0)
//                 even.push_back(x);
//             else
//                 odd.push_back(x);
//         }

//         // sort both
//         sort(even.begin(), even.end());
//         sort(odd.begin(), odd.end());

//         // merge back
//         int k = 0;

//         for (int x : even)
//             arr[k++] = x;

//         for (int x : odd)
//             arr[k++] = x;
//     }
// };

////gfg
// class Solution
// {
// public:
//     void sort012(vector<int> &arr)
//     {
//         // code here
//         int n = arr.size();
//         int c0 = 0;
//         int c1 = 0;
//         int c2 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == 0)
//                 c0++;

//             if (arr[i] == 1)
//                 c1++;

//             if (arr[i] == 2)
//                 c2++;
//         }

//         for (int i = 0; i < c0; i++)
//         {
//             arr[i] = 0;
//         }
//         int x = c0 + c1;
//         for (int i = c0; i < x; i++)
//         {
//             arr[i] = 1;
//         }
//         for (int i = c1 + c0; i < n; i++)
//         {
//             arr[i] = 2;
//         }
//     }
// };

// move all zero to end

// class Solution {
//   public:
//     void pushZerosToEnd(vector<int>& arr) {
//         // code here
//         int n =arr.size();
//         int k=0;

//         for(int i=0;i<n;i++){

//             if(arr[i]!=0){
//                 arr[k]=arr[i];
//                 k++;
//             }
//         }
//         for(int i=k;i<n;i++){
//             arr[k]=0;
//             k++;
//         }
//     }
// };

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {

        int n = arr.size();
        int k = 0;

        // Move all non-zero elements to the beginning
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[k] = arr[i];
                k++;
            }
        }

        // Fill the remaining positions with 0
        for (int i = k; i < n; i++)
        {
            arr[k] = 0;
            k++;
        }
    }
};

int main()
{

    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;

    obj.pushZerosToEnd(arr);

    cout << "\nArray after pushing zeros to the end:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}