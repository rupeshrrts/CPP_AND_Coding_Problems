// class Solution
// {
// public:
//     bool isInterleave(string &s1, string &s2, string &s3)
//     {

//         int n = s1.length();
//         int m = s2.length();

//         if (n + m != s3.length())
//             return false;

//         bool dp[n + 1][m + 1];

//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= m; j++)
//             {
//                 dp[i][j] = false;
//             }
//         }

//         dp[0][0] = true;

//         // First column
//         for (int i = 1; i <= n; i++)
//         {
//             if (s1[i - 1] == s3[i - 1] && dp[i - 1][0])
//                 dp[i][0] = true;
//         }

//         // First row
//         for (int j = 1; j <= m; j++)
//         {
//             if (s2[j - 1] == s3[j - 1] && dp[0][j - 1])
//                 dp[0][j] = true;
//         }

//         // Fill DP table
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= m; j++)
//             {

//                 if (dp[i - 1][j] && s1[i - 1] == s3[i + j - 1])
//                     dp[i][j] = true;

//                 if (dp[i][j - 1] && s2[j - 1] == s3[i + j - 1])
//                     dp[i][j] = true;
//             }
//         }

//         return dp[n][m];
//     }
// };