class Solution
{
public:
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        // write code here

        // store indices of negative elements
        deque<int> dq;
        // final answer
        vector<int> ans;

        // Step 1: Process first window (0 to k-1)
        for (int i = 0; i < k; i++)
        {
            if (arr[i] < 0)
            {
                // store index of negative element
                dq.push_back(i);
            }
        }

        // Step 2: Process remaining windows
        for (int i = k; i <= arr.size(); i++)
        {

            //  Get answer for current window
            if (!dq.empty())
            {
                // front of deque = first negative index
                ans.push_back(arr[dq.front()]);
            }
            else
            {
                // no negative element in window
                ans.push_back(0);
            }

            // Remove element which is out of this window
            // (i - k) = index which is leaving window
            if (!dq.empty() && dq.front() == i - k)
            {
                dq.pop_front();
            }

            // Add next element of array into window
            if (i < arr.size() && arr[i] < 0)
            {
                dq.push_back(i);
            }
        }
        return ans;
    }
};