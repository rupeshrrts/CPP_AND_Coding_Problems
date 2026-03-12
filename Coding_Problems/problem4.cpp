// i/p=abxcbdx
// o/p=abcbd
// i/p =""
// o/p =
// #include <iostream>
// #include <cstring>
// using namespace std;
// void replace(char input[])
// {
//     int l = strlen(input);
//     if (l == 0)
//     {
//         return;
//     }
//     if (input[0] == 'x')
//     {
//         for (int i = 0; i < l; i++)
//         {
//             input[i] = input[i + 1];
//         }
//         replace(input);
//     }
//     else // if first chsr is not 'x'
//     {
//         replace(input + 1);
//     }
// }

// int main()
// {
//     char input[100];
//     cout << "Enter the char: " << endl;
//     cin >> input;
//     replace(input);
//     cout << input << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter the string ";
//     cin >> str;
//     // string str = "Rupeshpfgh";
//     string result = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] != 'p')
//         {
//             result = result + str[i];
//         }
//     }
//     cout << result;
// }

// // replace every occrrence with x--> aam
// #include <iostream>
// #include <cstring>
// using namespace std;
// void replace(char input[])
// {
//     int l = strlen(input);
//     if (l == 0)
//     {
//         return;
//     }
//     if (input[0] == 'x')
//     {
//         for (int i = l; i > 0; i--)
//         {
//             input[i + 2] = input[i];
//         }
//         input[0] = 'r';
//         input[1] = 'a';
//         input[2] = 'm';
//         replace(input + 3);
//     }
//     else // if first chsr is not 'x'
//     {
//         replace(input + 1);
//     }
// }

// int main()
// {
//     char input[100];
//     cout << "Enter the char: " << endl;
//     cin >> input;
//     replace(input);
//     cout << input << endl;
// }

// generalized code
//  replace every occrrence with x--> aam
// #include <iostream>
// #include <cstring>
// using namespace std;

// void replace(char input[], char s, const char str[])
// {
//     int l1 = strlen(input);
//     int l2 = strlen(str);

//     if (l1 == 0)
//     {
//         return;
//     }
//     if (input[0] == s)
//     {
//         // shift characters
//         for (int i = l1; i >= 0; i--)
//         {
//             input[i + l2 - 1] = input[i];
//         }

//         // insert replacement string
//         for (int i = 0; i < l2; i++)
//         {
//             input[i] = str[i];
//         }

//         replace(input + l2, s, str);
//     }
//     else
//     {
//         replace(input + 1, s, str);
//     }
// }

// int main()
// {
//     char input[100];

//     cout << "Enter the string: ";
//     cin >> input;

//     replace(input, 'x', "ram");

//     cout << input << endl;
// }