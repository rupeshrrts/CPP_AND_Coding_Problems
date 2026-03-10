// Sum of all element of an array

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     int arr[6] = {4, 7, 2, 4, 5, 7};
//     int sum = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         sum += arr[i];
//     }
//     cout << "Sum is: " << sum << endl;
// }

// Sum of all element of an array

#include <iostream>
using namespace std;
int findSum(int arr[], int size)
{

    if (size == 0)

        return 0;
    return arr[0] + findSum(arr + 1, size - 1);
}
int main()
{
    int arr[6] = {4, 7, 2, 4, 5, 7};
    cout << "Sum is: " << findSum(arr, 6);
}
