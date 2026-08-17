// 767
//  https://leetcode.com/problems/reorganize-string/

// class Solution {
// public:
//     string reorganizeString(string s) {

//         int n = s.length();

//         // Frequency array to store count of each character
//         int count[26] = {0};

//         // Step 1: Count frequency of every character
//         for(int i = 0; i < n; i++) {
//             count[s[i] - 'a']++;
//         }

//         int maxFre = 0;
//         char ch;

//         // Step 2: Find the character having maximum frequency
//         for(int i = 0; i < 26; i++) {
//             if(count[i] > maxFre) {
//                 maxFre = count[i];
//                 ch = i + 'a';
//             }
//         }

//         // Step 3: If maximum frequency is greater than
//         // (n+1)/2 then reorganization is impossible
//         if(maxFre > (n + 1) / 2)
//             return "";

//         // Start filling from index 0 (even positions)
//         int index = 0;

//         // Step 4: Place the most frequent character first
//         // at even indices: 0,2,4,6...
//         while(maxFre > 0) {
//             s[index] = ch;
//             index += 2;
//             maxFre--;
//         }

//         // Step 5: Mark this character as completely used
//         count[ch - 'a'] = 0;

//         // Step 6: Place the remaining characters
//         for(int i = 0; i < 26; i++) {

//             // Place current character until its frequency becomes 0
//             while(count[i] > 0) {

//                 // If all even positions are filled,
//                 // start filling odd positions
//                 index = (index >= n) ? 1 : index;

//                 // Place current character
//                 s[index] = i + 'a';

//                 // Move to next alternate position
//                 index += 2;

//                 // One occurrence has been placed
//                 count[i]--;
//             }
//         }

//         // Step 7: Return the reorganized string
//         return s;
//     }
// };