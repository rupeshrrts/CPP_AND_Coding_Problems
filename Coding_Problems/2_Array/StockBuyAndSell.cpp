#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // int maxProfit(vector<int>& prices) {
    //     int n = prices.size();
    //     int min = prices[0];
    //     int max = 0;
    //     for(int i = 0; i < n; i++){
    //         if(max < prices[i] - min){
    //             max = prices[i] - min;
    //         }
    //         if(min > prices[i]){
    //             min = prices[i];
    //         }
    //     }
    //     return max;
    // }

    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();

        int minTillNow = prices[0];
        int maxProfit = 0;

        for (int i = 0; i < n; i++)
        {
            int profit = prices[i] - minTillNow;

            if (profit > maxProfit)
            {
                maxProfit = profit;
            }

            // minTillNow = min(minTillNow, prices[i]);

            if (prices[i] < minTillNow)
            {
                minTillNow = prices[i];
            }
        }

        return maxProfit;
    }
};

int main()
{
    Solution obj;

    // Example input
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = obj.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}

// // 122. Best Time to Buy and Sell Stock II

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.
// Example 2:

// Input: prices = [1,2,3,4,5]
// Output: 4
// Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
// Total profit is 4.
// Example 3:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
            {
                profit += (prices[i] - prices[i - 1]);
            }
        }

        return profit;
    }
};

int main()
{
    Solution obj;

    // Example input
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = obj.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}