// given an array reverse the content of the array
#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int temp;
    if (size == 0 || size == 1)
        return;
    temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
    reverse(arr + 1, size - 2);
}

int main()
{
    int arr[6] = {1, 6, 2, 4, 5, 7};
    reverse(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}