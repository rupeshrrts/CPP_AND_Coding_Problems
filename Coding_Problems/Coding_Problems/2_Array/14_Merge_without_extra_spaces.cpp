// based on merge sort concept

// // class Solution {
//   public:
//     void mergeArrays(vector<int>& a, vector<int>& b) {
//         // code here
//         int n = a.size();
//         int m = b.size();

//         int i =n-1;
//         int j = 0;
//         while(i>=0&&j<m){
//             if(a[i]>=b[j])
//             {
//                 swap(a[i--],b[j++]);

//             }
//             else{
//                 break;
//             }
//         }
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
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
    void mergeArrays(vector<int> &a, vector<int> &b)
    {

        int n = a.size();
        int m = b.size();

        int i = n - 1;
        int j = 0;

        // Swap larger elements of a with smaller elements of b
        while (i >= 0 && j < m)
        {
            if (a[i] > b[j])
            {
                swap(a[i], b[j]);
                i--;
                j++;
            }
            else
            {
                break;
            }
        }

        // Sort both arrays
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};

int main()
{

    vector<int> a = {1, 5, 9, 10, 15, 20};
    vector<int> b = {2, 3, 8, 13};

    Solution obj;
    obj.mergeArrays(a, b);

    cout << "Array A: ";
    for (int x : a)
        cout << x << " ";

    cout << "\nArray B: ";
    for (int x : b)
        cout << x << " ";

    cout << endl;

    return 0;
}