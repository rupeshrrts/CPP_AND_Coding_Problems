// remove contigious duplicate char
// git init
// git add .
// git commit -m "update feature"
// git pull origin main    // to
// git push origin main

#include <iostream>
using namespace std;
int main()
{

    string str = "Ruppeeeeeesshhftf";
    string result = "";
    for (int i = 0; i < str.size(); i++) // str.size()=== str.length()
    {
        if (str[i] == str[i + 1])
        {
            str[i] = str[i + 1];
        }
        else
        {
            result += str[i];
        }
    }
    cout << result;
}

// #include <iostream>
// using namespace std;
// #include <cstring>
// void remove(char input[])
// {
//     int l = strlen(input);
//     if (l == 0 || l == 1)
//     {
//         return;
//     }
//     else if (input[0] == input[1])
//     {
//         for (int i = 1; i <= l; i++)
//         {
//             input[i - 1] = input[i];
//         }
//         remove(input);
//     }
//     else
//     {
//         remove(input + 1);
//     }
// }

// int main()
// {
//     char input[100];
//     cout << "Enter String: " << endl;
//     cin >> input;
//     remove(input);
//     cout << input << endl;
// }
