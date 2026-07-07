
// // Leader_in_Array
// class Solution
// {
// public:
//     vector<int> leaders(vector<int> &arr)
//     {
//         // code here
//         int n = arr.size();
//         deque<int> ans;
//         int maxfr = arr[n - 1];
//         ans.push_front(maxfr);
//         for (int i = n - 2; i >= 0; i--)
//         {
//             if (arr[i] >= maxfr)
//             {
//                 maxfr = arr[i];
//                 ans.push_front(maxfr);
//             }
//         }
//         vector<int> last;
//         for (int x : ans)
//         {

//             last.push_back(x);
//         }
//         return last;
//     }
// };

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution
{
public:
    vector<int> leaders(vector<int> &arr)
    {
        int n = arr.size();
        deque<int> ans;

        int maxfr = arr[n - 1];
        ans.push_front(maxfr);

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= maxfr)
            {
                maxfr = arr[i];
                ans.push_front(maxfr);
            }
        }

        vector<int> last;
        for (int x : ans)
        {
            last.push_back(x);
        }

        return last;
    }
};

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> result = obj.leaders(arr);

    cout << "Leaders in array: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}