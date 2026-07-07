// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int n, q;
//     cout << "Enter size of array: ";
//     cin >> n;

//     cout << "Enter number of queries: ";
//     cin >> q;

//     // Difference array (1-indexed)
//     vector<long long> arr(n + 2, 0);

//     cout << "Enter queries (a b k):\n";
//     for (int i = 0; i < q; i++)
//     {
//         int a, b, k;
//         cin >> a >> b >> k;

//         arr[a] += k;     // start
//         arr[b + 1] -= k; // end + 1
//     }

//     // prefix sum + find max
//     long long sum = 0, maxVal = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += arr[i];
//         maxVal = max(maxVal, sum);
//     }

//     cout << "Maximum value: " << maxVal << endl;

//     return 0;
// }

/// with final ayyar store methode
#include <iostream>
#include < vector>
using namespace std;

int main()
{
    int n = 10;
    vector<vector<int>> queries = {
        {1, 5, 3},
        {4, 8, 7},
        {6, 9, 1}};

    // difference array
    vector<long long> diff(n + 2, 0);

    // apply queries
    for (auto q : queries)
    {
        int a = q[0], b = q[1], k = q[2];
        diff[a] += k;
        diff[b + 1] -= k;
    }

    // final array (store kar rahe hain)
    vector<long long> finalArr(n + 1);
    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += diff[i];    // prefix sum
        finalArr[i] = sum; // store final value
    }

    // print final array
    cout << "Final Array: ";
    for (int i = 1; i <= n; i++)
    {
        cout << finalArr[i] << " ";
    }
    cout << endl;

    // find max
    long long maxVal = *max_element(finalArr.begin() + 1, finalArr.end());

    cout << "Maximum value: " << maxVal << endl;

    return 0;
}