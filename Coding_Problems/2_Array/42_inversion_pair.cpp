// gfg

// // class Solution {
// //   public:
// //     int inversionCount(vector<int> &arr) {
// //         // code here
// //         int n = arr.size();
// //         int inv =0;
// //         for(int i=0;i<n;i++){
// //             for(int j=i;j<n;j++){
// //                 if(arr[i]>arr[j]){
// //                     inv++;
// //                 }
// //             }
// //         }
// //         return inv;
// //     }
// // };

// class Solution {
// public:

//     int merge(vector<int>& arr, int low, int mid, int high) {

//         vector<int> temp;

//         int left = low;
//         int right = mid + 1;

//         int inv = 0;

//         while (left <= mid && right <= high) {

//             if (arr[left] <= arr[right]) {
//                 temp.push_back(arr[left]);
//                 left++;
//             }
//             else {

//                 temp.push_back(arr[right]);

//                 inv += (mid - left + 1);

//                 right++;
//             }
//         }

//         while (left <= mid) {
//             temp.push_back(arr[left++]);
//         }

//         while (right <= high) {
//             temp.push_back(arr[right++]);
//         }

//         for (int i = low; i <= high; i++) {
//             arr[i] = temp[i - low];
//         }

//         return inv;
//     }

//     int mergeSort(vector<int>& arr, int low, int high) {

//         if (low >= high)
//             return 0;

//         int mid = (low + high) / 2;

//         int inv = 0;

//         inv += mergeSort(arr, low, mid);

//         inv += mergeSort(arr, mid + 1, high);

//         inv += merge(arr, low, mid, high);

//         return inv;
//     }

//     int inversionCount(vector<int>& arr) {

//         return mergeSort(arr, 0, arr.size() - 1);
//     }
// };