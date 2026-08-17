
// 2. Check given array is sorted or not
// #include <iostream>
// using namespace std;
// bool isSorted(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int arr[6] = {1, 3};
//     if (isSorted(arr, 2))
//     {
//         cout << "Sorted";
//     }
//     else
//     {
//         cout << "Not Sorted";
//     }
// }

// // Check given array is sorted or not
// #include <iostream>
// using namespace std;
// bool isSorted(int arr[], int size)
// {
//     if (size == 0 || size == 1)
//         return true;
//     if (arr[0] > arr[1])
//         return false;
//     return isSorted(arr + 1, size - 1);
// }

// int main()
// {
//     int arr[6] = {1, 3, 9, 5, 6, 3};
//     if (isSorted(arr, 6))
//     {
//         cout << "Sorted";
//     }
//     else
//     {
//         cout << "Not Sorted";
//     }
// }
