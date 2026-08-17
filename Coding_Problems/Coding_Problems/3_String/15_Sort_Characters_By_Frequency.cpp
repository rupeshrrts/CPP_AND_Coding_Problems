

// class Solution {
// public:
//     string frequencySort(string s) {

//         // Step 1: Count frequency of each character
//         int count[256] = {0};

//         for (int i = 0; i < s.length(); i++) {
//             count[s[i]]++;
//         }

//         string ans = "";

//         // Step 2: Repeat until all characters are processed
//         while (true) {

//             int maxFreq = 0;
//             int index = -1;

//             // Step 3: Find the character having maximum frequency
//             for (int i = 0; i < 256; i++) {

//                 if (count[i] > maxFreq) {
//                     maxFreq = count[i];
//                     index = i;
//                 }
//             }

//             // If no frequency is left, stop
//             if (maxFreq == 0)
//                 break;

//             // Step 4: Append the character maxFreq times
//             for (int i = 0; i < maxFreq; i++) {
//                 ans += (char)index;
//             }

//             // Step 5: Mark this character as used
//             count[index] = 0;
//         }

//         return ans;
//     }
// };