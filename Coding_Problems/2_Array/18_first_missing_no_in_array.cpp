// Suppose you have :

//     int elem = nums[i];
// long int seat = elem - 1;

// Since nums[i] is guaranteed to be :

//     -2 ^
//     31 <= nums[i] <= 2 ^ 31 - 1

//                               it fits perfectly in an int.

//                               Why can elem -
//                              1 overflow
//     ?

//     Consider the smallest possible value
//     :

//     nums[i] = INT_MIN; // -2147483648

// Now :

//     elem -
//     1

//     becomes

//     -
//     2147483649

//     which cannot be represented by a 32 -
//     bit int.

//     If elem is an int,
//     the subtraction is performed in int, causing signed integer overflow, which is undefined behavior in C++.

//                                                                           Does this code actually prevent overflow
//     ? long int elem = nums[i];
// long int seat = elem - 1;

// Yes, if long int is 64 - bit(Linux / macOS).

//                          Example :

//     long int elem = INT_MIN;
// long int seat = elem - 1;

// Result :

//     elem = -2147483648 seat = -2147483649

//                                No overflow.

//                                But be careful on Windows

//                                    On Windows(MSVC) :

//                                                       int = 32 bits long int = 32 bits

//         So this does not help :

//     long int elem = nums[i]; // still 32-bit on Windows

// A safer choice is :

//     long long elem = nums[i];
// long long seat = elem - 1;

// or

//     int64_t elem = nums[i];
// int64_t seat = elem - 1;

// // first possitive no missing in array
// class Solution
// {
// public:
//     int firstMissingPositive(vector<int> &nums)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             long int elem = nums[i];

//             long int seat = elem - 1;
//             if (elem >= 1 && elem <= nums.size())
//             {
//                 if (nums[seat] != elem)
//                 {
//                     swap(nums[i], nums[seat]);
//                     i--;
//                 }
//             }
//         }

//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (i + 1 != nums[i])
//             {
//                 return i + 1;
//             }
//         }
//         return nums.size() + 1;
//     }
// };

// // full code
// class Solution
// {
// public:
//     int firstMissingPositive(vector<int> &nums)
//     {
//         int n = nums.size();

//         // Place every number at its correct index
//         for (int i = 0; i < n; i++)
//         {
//             while (nums[i] >= 1 &&
//                    nums[i] <= n &&
//                    nums[nums[i] - 1] != nums[i])
//             {

//                 swap(nums[i], nums[nums[i] - 1]);
//             }
//         }

//         // Find the first index where value is incorrect
//         for (int i = 0; i < n; i++)
//         {
//             if (nums[i] != i + 1)
//                 return i + 1;
//         }

//         return n + 1;
//     }
// };