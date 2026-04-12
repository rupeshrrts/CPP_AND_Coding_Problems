class Solution
{
public:
    int maxSubarraySum(vector<int> &arr, int k)
    {
        // code here

        int windowSum = 0;
        int maxSum = 0;

        // first window
        for (int i = 0; i < k; i++)
        {
            windowSum += arr[i];
        }

        maxSum = windowSum;

        // slide window
        for (int i = k; i < arr.size(); i++)
        {
            windowSum += arr[i];     // add next
            windowSum -= arr[i - k]; // remove previous
            maxSum = max(maxSum, windowSum);
        }
        return maxSum;
    }
};