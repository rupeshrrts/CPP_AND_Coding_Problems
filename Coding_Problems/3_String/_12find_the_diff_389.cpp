// https://leetcode.com/problems/find-the-difference/description/

// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         int ans=0;

//         for(int i=0;i<s.length();i++){
//             ans ^=s[i];
//         }
//          for(int i=0;i<t.length();i++){
//             ans ^=t[i];
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         int freq[256] = {0};

//         for (int i=0;i<t.length();i++){
//             freq[t[i]]++;
//         }
//         for (int i=0;i<t.length();i++){
//             freq[s[i]]--;
//         }

//         for (int i=0;i<256;i++){
//             if (freq[t[i]] >0)
//                 return t[i];
//         }
//         return ' ';
//     }
// };

// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         int freq[26] = {0};

//         for (char ch : s)
//             freq[ch - 'a']++;

//         for (char ch : t) {
//             freq[ch - 'a']--;

//             if (freq[ch - 'a'] < 0)
//                 return ch;
//         }

//         return ' ';
//     }
// };