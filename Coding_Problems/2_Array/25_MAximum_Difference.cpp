
// 2016. Maximum Difference Between Increasing Elements

// class Solution
// {
// public:
//     int maximumDifference(vector<int> &nums)
//     {
//         int n = nums.size();
//         int maxDiff = -1;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (nums[i] < nums[j])
//                 {
//                     int diff = nums[j] - nums[i];

//                     // int diff= max(diff,maxDiff);

//                     if (diff > maxDiff)
//                     {
//                         maxDiff = diff;
//                     }
//                 }
//             }
//             // return maxDiff;
//         }
//         return maxDiff;
//     }
// };

// note jb v 2 return ke bich baat pfe na then maxdiff me wahi value le lo jo condition glt hone pr return krega ya fir right value return krega
