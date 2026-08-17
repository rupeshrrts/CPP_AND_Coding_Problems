
//// https://www.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1

// class Solution {
// public:
//     void segregateEvenOdd(vector<int>& arr) {
//         int c0 = 0;
//         sort(arr.begin(),arr.end());
//         // count evens
//         for (int i = 0; i < arr.size(); i++) {
//             if (arr[i] % 2 == 0) {
//                 c0++;
//             }
//         }

//         int k = 0;

//         // place evens
//         for (int i = 0; i < arr.size(); i++) {
//             if (arr[i] % 2 == 0) {
//                 swap(arr[k++] ,arr[i]);
//             }
//         }

//         sort(arr.begin()+c0,arr.end());
//         // place odds
//         // for (int i = c0; i < arr.size(); i++) {
//         //     // if (arr[i] % 2 == 1) {
//         //         arr[k++] = arr[i];
//         //     // }
//         // }
//     }
// };

// full code

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void segregateEvenOdd(vector<int> &arr)
    {

        // c0 stores the count of even numbers
        int c0 = 0;

        // Step 1: Sort the entire array.
        // Example:
        // Before : 5 2 8 1 4 7
        // After  : 1 2 4 5 7 8
        sort(arr.begin(), arr.end());

        // Step 2: Count how many even numbers are present.
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
            {
                c0++;
            }
        }

        // k points to the position where the next even number
        // should be placed.
        int k = 0;

        // Step 3: Move all even numbers to the beginning.
        // Whenever an even number is found, swap it with arr[k]
        // and increment k.
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
            {
                swap(arr[k], arr[i]);
                k++;
            }
        }

        // Step 4:
        // The even numbers are now at the beginning.
        // Sort only the odd part of the array.
        //
        // Example:
        // Before sorting odd part:
        // 2 4 8 5 7 1
        //
        // After sorting odd part:
        // 2 4 8 1 5 7
        sort(arr.begin() + c0, arr.end());

        // -----------------------------------------------------
        // NOTE:
        // The loop below is NOT REQUIRED.
        // The array is already correctly arranged after Step 4.
        // Writing arr[k++] = arr[i] can even overwrite values.
        // -----------------------------------------------------

        /*
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 1) {
                arr[k++] = arr[i];
            }
        }
        */
    }
};

int main()
{

    Solution obj;

    vector<int> arr = {5, 2, 8, 1, 4, 7, 6, 3};

    cout << "Original Array : ";
    for (int x : arr)
        cout << x << " ";

    cout << endl;

    obj.segregateEvenOdd(arr);

    cout << "Result Array   : ";
    for (int x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}