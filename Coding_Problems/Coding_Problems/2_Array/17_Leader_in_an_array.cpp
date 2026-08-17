// // Leader in an array gfg
// class Solution {
//   public:
//     vector<int> leaders(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         vector<int> arr2;
//         int maxi=arr[n-1];
//         arr2.push_back(maxi);
//         for(int i=n-2;i>=0;i--){
//         if(arr[i]>=maxi){
//             maxi=arr[i];
//             arr2.push_back(maxi);
//             }
//         }
//         reverse(arr2.begin(),arr2.end());
//         return arr2;
//     }
// };

// full code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> leaders(vector<int> &arr)
    {
        int n = arr.size();

        vector<int> ans;

        // Rightmost element is always a leader
        int maxi = arr[n - 1];
        ans.push_back(maxi);

        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= maxi)
            {
                maxi = arr[i];
                ans.push_back(maxi);
            }
        }

        // Reverse to get leaders in original order
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> ans = obj.leaders(arr);

    cout << "Leaders: ";
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}