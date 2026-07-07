
// https://www.geeksforgeeks.org/problems/second-largest3735/1

// class Solution
// {
// public:
//     int getSecondLargest(vector<int> &arr)
//     {

//         // code here
//         int firstLargest = -1;
//         int seconedLargest = -1;
//         // travaer each element to check
//         for (int newElement : arr)
//         {
//             if (newElement > firstLargest)
//             {
//                 seconedLargest = firstLargest;
//                 firstLargest = newElement;
//             }
//             else if (newElement > seconedLargest)
//             {
//                 seconedLargest = newElement;
//             }
//         }
//         return seconedLargest;
//     }
// };

// https://leetcode.com/problems/third-maximum-number/
// 414. Third Maximum Number distinct

// class Solution
// {
// public:
//     int thirdMax(vector<int> &nums)
//     {
//         long long firstLargest = LLONG_MIN;
//         long long seconedLargest = LLONG_MIN;
//         long long thirdLargest = LLONG_MIN;

//         // travaer each element to check
//         for (int newElement : nums)
//         {
//             // Ignore duplicates
//             if (newElement == firstLargest || newElement == seconedLargest || newElement == thirdLargest)
//                 continue;

//             if (newElement > firstLargest)
//             {
//                 thirdLargest = seconedLargest;
//                 seconedLargest = firstLargest;
//                 firstLargest = newElement;
//             }
//             else if (newElement > seconedLargest)
//             {
//                 thirdLargest = seconedLargest;
//                 seconedLargest = newElement;
//             }
//             else if (newElement > thirdLargest)
//             {
//                 thirdLargest = newElement;
//             }
//         }
//         return (thirdLargest == LLONG_MIN) ? firstLargest : thirdLargest;
//     }
// };
