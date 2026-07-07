// https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

// // for the move all the negative element to the begning

// // class Solution {
// //   public:
// //     void segregateElements(vector<int>& arr) {
// //         int n = arr.size();
// //         // int j=0;

// //         vector<int> temp;

// //         for(int i=0;i<n;i++){
// //             if(arr[i]<0){
// //                  temp.push_back(arr[i]);
// //             }
// //         }

// //          for(int i=0;i<n;i++){
// //             if(arr[i]>=0){
// //                 temp.push_back(arr[i]);
// //             }
// //         }

// //         arr=temp;

// //     }
// // };

// // for the move all the negative element to the end
// class Solution {
//   public:
//     void segregateElements(vector<int>& arr) {
//         int n = arr.size();
//         // int j=0;

//         vector<int> temp;
//         for(int i=0;i<n;i++){
//             if(arr[i]>=0){
//                 temp.push_back(arr[i]);
//             }
//         }

//         for(int i=0;i<n;i++){
//             if(arr[i]<0){
//                  temp.push_back(arr[i]);
//             }
//         }
//         arr=temp;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void segregateElements(vector<int> &arr)
    {
        vector<int> temp;

        // Store non-negative elements first
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= 0)
            {
                temp.push_back(arr[i]);
            }
        }

        // Store negative elements
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < 0)
            {
                temp.push_back(arr[i]);
            }
        }

        // Copy back to original array
        arr = temp;
    }
};

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    obj.segregateElements(arr);

    cout << "Array after moving negative elements to the end:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
