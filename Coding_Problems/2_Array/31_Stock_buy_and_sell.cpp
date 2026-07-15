// Leetcode 121. Best Time to Buy and Sell Stock

// class Solution {
//   public:
//     int maxProfit(vector<int> &prices) {
//         // code here
//         int n=prices.size();
//         int minTillNow=prices[0];
//         int maxProfit=0;
//         int profit =0;

//         // logic
//         for(int i=1;i<n;i++){
//             profit=prices[i]-minTillNow;
//             if(profit>maxProfit){
//                 maxProfit=profit;
//             }
//             // minTillNow=min(prices[i],minTillNow);

//             if(prices[i]<minTillNow){
//                 minTillNow=prices[i];
//             }
//         }
//         return maxProfit;
//     }
// };
