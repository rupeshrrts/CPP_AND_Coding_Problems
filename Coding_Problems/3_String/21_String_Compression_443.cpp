// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int n = chars.size();
//         int count=1;

//         string temp="";
//         for(int i=0;i<n;i++){
//             if(i + 1 < n && chars[i] == chars[i+1]) {
//             count++;
//             }
//             else {
//              temp = temp + chars[i];
//                if(count > 1) {
//                     temp = temp + to_string(count);
//                 }
//                 count = 1;
//             }

//         }

//         // Put compressed result back into chars
//         for(int i = 0; i < temp.length(); i++) {
//             chars[i] = temp[i];
//         }

//         return temp.length();

//     }
// };