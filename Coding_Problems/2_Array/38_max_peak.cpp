// 162. Find Peak Element

// class Solution {
//   public:
//     int peakElement(vector<int> &arr) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left < right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] < arr[mid + 1]) {
//             left = mid + 1;
//         } else {
//             right = mid;
//         }
//     }

//     return left;   // or right (both are equal)
// }
// };

// class Solution {
// public:
//     int peakElement(vector<int> &arr) {
//         int n = arr.size();

//         if (n == 1)//only 1 element so index is 0 is index
//             return 0;

//         if (arr[0] > arr[1])// not posible
//             return 0;

//         if (arr[n - 1] > arr[n - 2])//Consider the element before the first element and the element after the last element to be negative infinity.
//             return n - 1;

//         for (int i = 1; i < n - 1; i++) {
//             if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
//                 return i;
//         }

//         return -1;
//     }
// };
