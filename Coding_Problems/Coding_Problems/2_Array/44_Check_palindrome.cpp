// gfg

// class Solution
// {
// public:
//     bool isPalindrome(int n)
//     {
//         n = abs(n);

//         int original = n; // first find absolute n
//         int rev = 0;

//         while (n > 0)
//         {
//             rev = rev * 10 + n % 10;
//             n = n / 10;
//         }

//         return original == rev;
//     }
// };

// leetcode 9

// class Solution {
// public:
//     bool isPalindrome(int n) {
//         //   n = abs(n);

//         if(n<0){
//             return false;
//         }

//         int original = n;// first find absolute n
//         long rev = 0;

//         while (n > 0) {
//             rev = rev * 10 + n % 10;
//             n = n / 10;
//         }

//         return original == rev;
//     }
// };
