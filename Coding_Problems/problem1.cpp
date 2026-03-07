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
