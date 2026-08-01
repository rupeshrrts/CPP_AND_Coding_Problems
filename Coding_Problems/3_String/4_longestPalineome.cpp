// gfg

// class Solution
// {
// public:
//     string getLongestPal(string &s)
//     {
//         // code here

//         int low, high, start = 0, maxlen = 1, len = s.size();
//         for (int i = 1; i < len; i++)
//         {

//             low = i - 1;
//             high = i;
//             while (low >= 0 && high < len && s[low] == s[high])
//             {
//                 if (high - low + 1 > maxlen)
//                 {
//                     start = low;
//                     maxlen = high - low + 1;
//                 }
//                 low--;
//                 high++;
//             }

//             low = i - 1;
//             high = i + 1;
//             while (low >= 0 && high < len && s[low] == s[high])
//             {
//                 if (high - low + 1 > maxlen)
//                 {
//                     start = low;
//                     maxlen = high - low + 1;
//                 }
//                 low--;
//                 high++;
//             }
//         }
//         return s.substr(start, maxlen);
//     }
// };

// // 5. Longest Palindromic Substring
// class Solution
// {
// public:
//     string longestPalindrome(string s)
//     {
//         int low, high, start = 0, maxlen = 1, len = s.size();
//         for (int i = 1; i < len; i++)
//         {

//             low = i - 1;
//             high = i;
//             while (low >= 0 && high < len && s[low] == s[high])
//             {
//                 if (high - low + 1 > maxlen)
//                 {
//                     start = low;
//                     maxlen = high - low + 1;
//                 }
//                 low--;
//                 high++;
//             }

//             low = i - 1;
//             high = i + 1;
//             while (low >= 0 && high < len && s[low] == s[high])
//             {
//                 if (high - low + 1 > maxlen)
//                 {
//                     start = low;
//                     maxlen = high - low + 1;
//                 }
//                 low--;
//                 high++;
//             }
//         }
//         return s.substr(start, maxlen);
//     }
// };