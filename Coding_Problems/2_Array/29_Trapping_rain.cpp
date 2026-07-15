// leet code
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {

//         int n = nums.size();
//         int *pre=new int[n];
//         int * post=new int[n];

//         pre[0]=nums[0];
//         post[n-1]=nums[n-1];

//         //calculate pre
//         for(int i=1;i<n;i++){
//             pre[i]=pre[i-1]*nums[i];
//         }

//         // calcilate post
//         for(int i=n-2;i>=0;i--){
//             post[i]=post[i+1]*nums[i];
//         }

//         // for anser hab to return vector
//         vector<int> ans(n);
//         for(int i=0;i<n;i++){
//             if(i==0)
//                 ans[i]=post[i+1];
//             else if(i==n-1)
//                 ans[i]=pre[i-1];
//             else

//             //calculate each value of ans array
//                 ans[i]=pre[i-1]*post[i+1];
//         }
//         return ans;

//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {

        int n = height.size();

        if (n == 0)
            return 0;

        int sum = 0;

        int *left = new int[n];
        int *right = new int[n];

        // Fill left max array
        left[0] = height[0];
        for (int i = 1; i < n; i++)
        {
            left[i] = max(left[i - 1], height[i]);
        }

        // Fill right max array
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(right[i + 1], height[i]);
        }

        // Calculate trapped water
        for (int i = 1; i < n - 1; i++)
        {
            sum += min(left[i], right[i]) - height[i];
        }

        delete[] left;
        delete[] right;

        return sum;
    }
};

int main()
{

    int n;
    cout << "Enter number of bars: ";
    cin >> n;

    vector<int> height(n);

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    Solution obj;

    int ans = obj.trap(height);

    cout << "Total Trapped Water = " << ans << endl;

    return 0;
}