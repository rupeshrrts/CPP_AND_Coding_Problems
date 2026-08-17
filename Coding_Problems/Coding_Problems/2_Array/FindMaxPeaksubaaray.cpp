#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 6, 4, 1, 5, 2};
    int k = 5;

    int n = arr.size();

    // Step 1: first window
    int current = 0;

    for (int i = 1; i < k - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            current++;
        }
    }

    int maxPeaks = current;
    int leftIndex = 0;

    // Step 2: sliding window
    for (int l = 1; l <= n - k; l++)
    {
        int r = l + k - 1;

        // remove (old inner element)
        if (arr[l] > arr[l - 1] && arr[l] > arr[l + 1])
        {
            current--;
        }

        // add (new inner element)
        if (arr[r - 1] > arr[r - 2] && arr[r - 1] > arr[r])
        {
            current++;
        }

        if (current > maxPeaks)
        {
            maxPeaks = current;
            leftIndex = l;
        }
    }

    cout << "Max Peaks: " << maxPeaks << endl;
    cout << "Starting Index: " << leftIndex << endl;

    return 0;
}