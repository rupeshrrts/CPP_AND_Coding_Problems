
// // remove a particuler char from a char array or from a string
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "pupeshpds";
//     string result = "";

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == 'p')
//         {
//             // result=result;
//             str[i] = str[i + 1];
//         }
//         else
//         {
//             result = result + str[i];
//         }
//         // if(str[i]!='s'){
//         //     result=result+str[i];
//         // }
//     }
//     cout << result;
// }

// // remove a particuler char from a char array or from a string
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "Rupeshpds";
//     string result = "";

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] != 's')
//         {
//             result = result + str[i];
//         }
//     }
//     cout << result;
// }

#include <iostream>
using namespace std;
#include <cstring>
void replace(char input[])
{
    int l = strlen(input);
    if (l == 0)
    {
        return;
    }
    if (input[0] == 'x') // if the first char to be removed
    {
        for (int i = 0; i < l; i++)
        {
            input[i] = input[i + 1];
        }
        replace(input);
    }
    else // if the first char is not 'x' to be removed
    {

        replace(input + 1);
    }
}
int main()
{
    char input[100];
    cin >> input;
    replace(input);
    cout << input << endl;
}
