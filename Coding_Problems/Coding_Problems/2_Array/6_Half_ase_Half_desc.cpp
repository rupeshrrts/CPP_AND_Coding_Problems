
// https://www.geeksforgeeks.org/problems/sort-first-half-in-ascending-and-second-half-in-descending1714/1

// class Solution {
//   public:
//     vector<int> customSort(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         int mid = n / 2;
//         sort(arr.begin(), arr.begin() + mid);
//         sort(arr.begin() + mid, arr.end(), greater<int>());
//         return arr;
//     }
// };

#include <iostream>
#include <vector>
#include <algorithm> // For sort() and greater()

using namespace std;

class Solution
{
public:
    vector<int> customSort(vector<int> &arr)
    {

        // Find the size of the array
        int n = arr.size();

        // Find the middle index
        int mid = n / 2;

        // Sort the first half in ascending order
        sort(arr.begin(), arr.begin() + mid);

        // Sort the second half in descending order
        sort(arr.begin() + mid, arr.end(), greater<int>());

        // Return the modified array
        return arr;
    }
};

int main()
{
    // Input array
    vector<int> arr = {9, 4, 7, 2, 8, 5};

    // Create object of Solution class
    Solution obj;

    // Call the function
    vector<int> ans = obj.customSort(arr);

    // Print the sorted array
    cout << "Sorted Array: ";

    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}