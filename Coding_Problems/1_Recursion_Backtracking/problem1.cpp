// Sum of all element of an array

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     int arr[6] = {4, 7, 2, 4, 5, 7};
//     int sum = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         sum += arr[i];
//     }
//     cout << "Sum is: " << sum << endl;
// }

// Sum of all element of an array

// #include <iostream>
// using namespace std;
// int findSum(int arr[], int size)
// {

//     if (size == 0)

//         return 0;
//     return arr[0] + findSum(arr + 1, size - 1);
// }
// int main()
// {
//     int arr[6] = {4, 7, 2, 4, 5, 7};
//     cout << "Sum is: " << findSum(arr, 6);
// }

// i/p=abxcbdx
// o/p=abcbd
// i/p =""
// o/p =

// // basic way
// #include<iostream>
// using namespace std;
// int main(){

//     string str="Rupeshpds";
//     string result="";

//     for(int i=0;i<str.length();i++){
//         if(str[i]!='s'){
//             result=result+str[i];
//         }
//     }
//     cout<<result;
// }

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
