// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the n : ";
//     cin >> n;

//     int *ptr = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> ptr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << ptr[i] << " ";
//     }
//     cout << endl;
//     cout << "Enter the q : ";

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int a, b;
//         cout << "Enter the range : " << endl;
//         cin >> a >> b;

//         int sum = 0;
//         for (int i = a; i <= b; i++)
//         {
//             sum = sum + ptr[i];
//         }

//         cout << sum;
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     void C_Sum(int ptr[])
//     {
//         cout << endl;
//         cout << "Enter the q : ";
//         int q;
//         cin >> q;
//         while (q--)
//         {
//             int a, b;
//             cout << "Enter the range : " << endl;
//             cin >> a >> b;

//             int sum = 0;
//             for (int i = a; i <= b; i++)
//             {
//                 sum = sum + ptr[i];
//             }

//             cout << sum;
//         }
//     }
// };
// int main()
// {
//     int n;
//     cout << "Enter the n : ";
//     cin >> n;

//     int *ptr = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> ptr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << ptr[i] << " ";
//     }

//     Solution obj;
//     obj.C_Sum(ptr);
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     int rangeSum(vector<int> &nums, int left, int right)
//     {
//         int sum = 0;
//         for (int i = left; i <= right; i++)
//         {
//             sum += nums[i];
//         }
//         return sum;
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     Solution obj;

//     int q;
//     cin >> q;

//     while (q--)
//     {
//         int left, right;
//         cin >> left >> right;

//         cout << obj.rangeSum(nums, left, right) << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *ptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    int q;
    cin >> q;
    int *pre = new int[n];
    for (int i = 0; i < n; i++)
    {

        if (i == 0)
            pre[i] = ptr[i];
        else
            pre[i] = pre[i - 1] + ptr[i];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        sum = pre[b];

        if (a - 1 >= 0)
        {
            sum = sum - pre[a - 1];
        }

        cout << sum << endl;
    }

    return 0;
}