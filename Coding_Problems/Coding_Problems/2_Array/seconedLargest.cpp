

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[] = {10, 20, 5, 30, 25};
//     int n = sizeof(a) / sizeof(a[0]);

//     int max1, max2;

//     // Step 1: Initialize first two elements
//     if (a[0] > a[1])
//     {
//         max1 = a[0];
//         max2 = a[1];
//     }
//     else
//     {
//         max2 = a[0];
//         max1 = a[1];
//     }

//     // Step 2: Traverse remaining elements
//     for (int i = 2; i < n; i++)
//     {
//         if (a[i] > max1)
//         {
//             max2 = max1;
//             max1 = a[i];
//         }
//         else if (a[i] > max2)
//         {
//             max2 = a[i];
//         }
//     }

//     cout << "Second Largest Element is: " << max2;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr = {10, 20, 5, 30, 25};

//     int n = arr.size();
//     int max1, max2;

//     // Step 1: Initialize first two elements
//     if (arr[0] > arr[1])
//     {
//         max1 = arr[0];
//         max2 = arr[1];
//     }
//     else
//     {
//         max2 = arr[0];
//         max1 = arr[1];
//     }

//     // Step 2: Traverse remaining elements
//     for (int i = 2; i < n; i++)
//     {
//         if (arr[i] > max1)
//         {
//             max2 = max1;
//             max1 = arr[i];
//         }
//         else if (arr[i] > max2)
//         {
//             max2 = arr[i];
//         }
//     }

//     cout << "Second Largest Element is: " << max2;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> &a)
{
    int n = a.size();

    // Edge case
    if (n < 2)
    {
        return -1;
    }

    int max1, max2;

    // Step 1: Initialize first two elements
    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else
    {
        max1 = a[1];
        max2 = a[0];
    }

    // Step 2: Traverse remaining elements
    for (int i = 2; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }

    // If no second largest exists
    if (max1 == max2)
    {
        return -1;
    }

    return max2;
}

int main()
{
    vector<int> arr = {25, 16, 38, 10, 35, 48, 20, 50};

    int result = secondLargest(arr);

    if (result == -1)
        cout << "Second largest element not found";
    else
        cout << "Second largest element: " << result;

    return 0;
}