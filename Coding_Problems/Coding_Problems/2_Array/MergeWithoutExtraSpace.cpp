// merge without extra spaces
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

        // Swap elements to maintain order
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
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> a(n);

    cout << "Enter elements of first array (sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> b(m);

    cout << "Enter elements of second array (sorted): ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    Solution obj;
    obj.mergeArrays(a, b);

    cout << "\nAfter merging:\n";

    cout << "Array a: ";
    for (int x : a)
    {
        cout << x << " ";
    }

    cout << "\nArray b: ";
    for (int x : b)
    {
        cout << x << " ";
    }

    return 0;
}