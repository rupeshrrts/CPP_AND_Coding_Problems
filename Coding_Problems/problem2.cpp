// Check given array is sorted or not
#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    return isSorted(arr + 1, size - 1);
}
int main()
{
    int arr[6] = {1, 3};
    if (isSorted(arr, 2))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
}