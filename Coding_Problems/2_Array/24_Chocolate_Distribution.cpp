// gfg

// class Solution {
//   public:
//     int findMinDiff(vector<int>& a, int m) {
//         // code here
//         sort(a.begin(),a.end());
//         int minDiff = INT_MAX;

//         for(int i =0;m+i-1<a.size();i++)
//         {
//             int diff=a[m+i-1] - a[i];
//             if(diff<minDiff){
//                 minDiff=diff;
//             }
//         }
//         return minDiff;
//     }
// };

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

        // If there are fewer packets than students
        if (m > a.size())
            return -1;

        // Sort the packets
        sort(a.begin(), a.end());

        int minDiff = INT_MAX;

        // Check every window of size m
        for (int i = 0; i + m - 1 < a.size(); i++)
        {

            int diff = a[i + m - 1] - a[i];

            minDiff = min(minDiff, diff);
        }

        return minDiff;
    }
};

int main()
{

    int n;
    cout << "Enter number of chocolate packets: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter chocolates in each packet:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cout << "Enter number of students: ";
    cin >> m;

    Solution obj;

    int ans = obj.findMinDiff(a, m);

    if (ans == -1)
        cout << "Not enough packets for all students.\n";
    else
        cout << "Minimum Difference = " << ans << endl;

    return 0;
}