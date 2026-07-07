#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        if (n < 3)
            return 0;

        int sum = 0;

        vector<int> left(n), right(n);

        left[0] = height[0];
        right[n - 1] = height[n - 1];

        // fill left array
        for (int i = 1; i < n; i++)
        {
            left[i] = max(height[i], left[i - 1]);
        }

        // fill right array
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(height[i], right[i + 1]);
        }

        // calculate trapped water
        for (int i = 1; i <= n - 2; i++)
        {
            sum += min(left[i], right[i]) - height[i];
        }

        return sum;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    int result = obj.trap(height);

    cout << "Total trapped water: " << result << endl;

    return 0;
}
