
// // gfg   https://www.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1

// class Solution {
//   public:
//     bool isIsogram(string& s) {
//         //  code here
//         // int count [256]={0};
//         // for(int i=0;i<s.length();i++){
//         //     count[s[i]]++;
//         // }

//         // for(int i=0;i<256;i++){
//         //     if(count[i]>1){
//         //         return false;
//         //     }
//         // }
//         // return true;

//          int count [26]={0};
//         for(int i=0;i<s.length();i++){
//             count[s[i]-'a']++;
//         }

//         for(int i=0;i<26;i++){
//             if(count[i]>1){
//                 return false;
//             }
//         }
//         return true;
//     }
// };