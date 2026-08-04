
// www.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1

// string printSequence(string S)
// {
//     // code here.
//     // Mapping of each alphabet (A-Z) to its old mobile keypad sequence
//     // Index 0 -> A -> "2"
//     // Index 1 -> B -> "22"
//     // Index 2 -> C -> "222"
//     // Index 25 -> Z -> "9999"
//     string str[] = {
//         "2", "22", "222",
//         "3", "33", "333",
//         "4", "44", "444",
//         "5", "55", "555",
//         "6", "66", "666",
//         "7", "77", "777", "7777",
//         "8", "88", "888",
//         "9", "99", "999", "9999"};
//     // Store the final keypad sequence
//     string answer = "";

//     // Traverse every character of the input string
//     for (int i = 0; i < S.length(); i++)
//     {

//         // If character is a space,
//         // append '0' because on old keypads,
//         // space is represented by 0.
//         if (S[i] == ' ')
//         {
//             answer += '0';
//         }
//         else
//         {

//             // Convert character to array index
//             // Example:
//             // 'A' - 'A' = 0
//             // 'B' - 'A' = 1
//             // 'H' - 'A' = 7
//             int index = S[i] - 'A';
//             // Append the corresponding keypad sequence
//             answer += str[index];
//         }
//     }

//     // Return the final sequence
//     return answer;
// }