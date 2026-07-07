// 303 Range Sum Query

// class NumArray
// {
// public:
//     int *preSum; // need to be declare here
//     NumArray(vector<int> &nums)
//     {

//         int n = nums.size();
//         preSum = new int[n]; // initialize
//         preSum[0] = nums[0];
//         for (int i = 1; i < n; i++)
//         {
//             preSum[i] = preSum[i - 1] + nums[i];
//         }
//     }

//     int sumRange(int left, int right)
//     {
//         if (left == 0)
//             return preSum[right];

//         return preSum[right] - preSum[left - 1];
//     }
// };

// Full code
// #include <iostream>
// #include <vector>
// using namespace std;

// class NumArray
// {
// public:
//     int *preSum;

//     // Constructor
//     NumArray(vector<int> &nums)
//     {
//         int n = nums.size();

//         preSum = new int[n];
//         preSum[0] = nums[0];

//         for (int i = 1; i < n; i++)
//         {
//             preSum[i] = preSum[i - 1] + nums[i];
//         }
//     }

//     // Returns sum from index left to right
//     int sumRange(int left, int right)
//     {
//         if (left == 0)
//             return preSum[right];

//         return preSum[right] - preSum[left - 1];
//     }

//     // Destructor to free memory
//     ~NumArray()
//     {
//         delete[] preSum;
//     }
// };

// int main()
// {
//     vector<int> nums = {-2, 0, 3, -5, 2, -1};

//     NumArray obj(nums);

//     cout << "sumRange(0,2) = " << obj.sumRange(0, 2) << endl;
//     cout << "sumRange(2,5) = " << obj.sumRange(2, 5) << endl;
//     cout << "sumRange(0,5) = " << obj.sumRange(0, 5) << endl;

//     return 0;
// }

// or

#include <iostream>
#include <vector>
using namespace std;

class NumArray
{
private:
    vector<int> preSum;

public:
    NumArray(vector<int> &nums)
    {
        int n = nums.size();

        preSum.resize(n);
        preSum[0] = nums[0];

        for (int i = 1; i < n; i++)
        {
            preSum[i] = preSum[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right)
    {
        if (left == 0)
            return preSum[right];

        return preSum[right] - preSum[left - 1];
    }
};

int main()
{
    vector<int> nums = {-2, 0, 3, -5, 2, -1};

    NumArray obj(nums);

    cout << obj.sumRange(0, 2) << endl;
    cout << obj.sumRange(2, 5) << endl;
    cout << obj.sumRange(0, 5) << endl;

    return 0;
}