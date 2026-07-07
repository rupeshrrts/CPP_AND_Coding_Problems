#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    int findMinDiff(vector<int> &a, int m)
    {
        // code here

        int n = a.size();
        int mdif = INT_MAX;
        sort(a.begin(), a.end());

        for (int i = 0; m + i - 1 < n; i++)
        {
            int diff = a[m + i - 1] - a[i];
            if (diff < mdif)
            {
                mdif = diff;
            }
        }
        return mdif;
    }
};

int main()
{
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;

    Solution obj;
    cout << "Output" << endl;
    cout << obj.findMinDiff(a, m);

    return 0;
}