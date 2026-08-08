// isalpha() is a C/C++ library function used to check whether a character is an alphabet (A-Z or a-z).

// Syntax
// #include <cctype>

// isalpha(character);
// Return Value
// Returns non-zero (true) → if the character is an alphabet (A-Z or a-z)
// Returns 0 (false) → otherwise
// Example 1
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     char ch = 'A';

//     if (isalpha(ch))
//         cout << "Alphabet";
//     else
//         cout << "Not Alphabet";

//     return 0;
// }

// Output

// Alphabet
// Example 2
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     char ch = '5';

//     if (isalpha(ch))
//         cout << "Alphabet";
//     else
//         cout << "Not Alphabet";

//     return 0;
// }

// Output

// Not Alphabet

// leetcode

// class Solution {
// public:
//     string reverseOnlyLetters(string s) {
//         int left = 0;
//         int right = s.length() - 1;

//         while (left < right) {

//             if (!isalpha(s[left])) {
//                 left++;
//             }
//             else if (!isalpha(s[right])) {
//                 right--;
//             }
//             else {
//                 swap(s[left], s[right]);
//                 left++;
//                 right--;
//             }
//         }
//         return s;
//     }
// };