// // leetcode -344 Reverse String

// ////  original function
// class Solution
// {
// public:
//     void reverseString(vector<char> &s)
//     {
//         int first = 0, last = s.size() - 1;
//         while (first < last)
//         {
//             swap(s[first], s[last]);
//             first++, last--;
//         }
//         // int n = s.size();
//         // for(int i=0;i<n/2;i++){
//         //     swap(s[i],s[n-i-1]);
//         // }
//     }
// };

// //gfg
// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         // code here

//         int start =0;
//         int end = arr.size()-1;

//         while(start<end){
//             swap(arr[start],arr[end]);
//             start++,end--;
//         }
//     }
// };

// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     void reverseString(vector<char> &s)
//     {
//         int first = 0, last = s.size() - 1;
//         while (first < last)
//         {
//             swap(s[first], s[last]);
//             first++, last--;
//         }
//     }
// };

// int main()
// {
//     vector<char> s;
//     int n;
//     cout << "Enter number of characters: ";
//     cin >> n;
//     cout << "Enter characters: ";
//     for (int i = 0; i < n; i++)
//     {
//         char ch;
//         cin >> ch;
//         s.push_back(ch);
//     }

//     Solution obj;
//     obj.reverseString(s);
//     cout << "Reversed String: ";
//     for (char ch : s)
//     {
//         cout << ch;
//     }
//     cout << endl;
//     return 0;
// }

// // leetcode 541. Reverse String II
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int n = s.size();

        // Process every 2k characters
        for (int i = 0; i < n; i = i + 2 * k)
        {
            int start = i;
            int end = min(i + k - 1, n - 1);

            // Reverse first k characters
            while (start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};

int main()
{
    Solution obj;

    string s;
    int k;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter the value of k: ";
    cin >> k;

    string result = obj.reverseStr(s, k);

    cout << "Reversed String: " << result << endl;

    return 0;
}

// // https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
// class Solution
// {
// public:
//     void reverseInGroups(vector<int> &arr, int k)
//     {
//         // code here

//         int n = arr.size();

//         for (int i = 0; i < n; i = i + k)
//         {

//             int start = i;
//             int end = min(i + (k - 1), n - 1);
//             while (start < end)
//             {
//                 swap(arr[start++], arr[end--]);
//             }
//         }
//     }
// };
