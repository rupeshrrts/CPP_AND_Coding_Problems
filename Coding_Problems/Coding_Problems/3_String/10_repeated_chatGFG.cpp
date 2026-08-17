// Repeated Character
// https://www.geeksforgeeks.org/problems/repeated-character2058/1

// class Solution
// {
// public:
//     char firstRep(string s)
//     {
//         // code here.
//         int n = s.length();

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (s[i] == s[j])
//                 {
//                     return s[i];
//                 }
//             }
//         }
//         return '#';
//     }
// };

// optimized

// class Solution {
//   public:
//     char firstRep(string s) {
//         // code here.
//         int n = s.length();
//         int count[256]={0};
//         for(int i =0;i<n;i++){
//             count[s[i]]++;
//         }

//         for(int i =0;i<n;i++){
//         if(count[s[i]]>1){
//             return s[i];
//         }
//         }
//         return '#';
//     }
// };