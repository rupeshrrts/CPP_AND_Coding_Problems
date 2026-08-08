// //gfg  // Minimum Bracket Reversals to Balance

// class Solution {
//   public:
//     int countMinReversals(string s) {
//         // code here
//         int n = s.length();
//         if(n%2==1){
//             return -1;
//         }

//         stack<char>v;
//         int open=0;
//         int close=0;
//         for(int i=0;i<n;i++){
//             char ch = s[i];
//             if(ch=='{'){
//                 v.push(ch);
//                 open++;
//             }
//             else if(ch=='}'& !v.empty()){
//                 v.pop();
//                 open--;
//             }
//             else{
//                 close++;
//             }
//         }

//         if(open&1){
//           open=  (open/2)+1;
//         }else{
//             open=(open/2);
//         }

//          if(close&1){
//             close = (close/2)+1;
//         }else{
//             close = (close/2);
//         }
//         return open+close;
//     }
// };