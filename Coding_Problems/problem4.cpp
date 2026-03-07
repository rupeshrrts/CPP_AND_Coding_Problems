// i/p=abxcbdx
// o/p=abcbd
// i/p =""
// o/p =
#include <iostream>
#include <cstring>
using namespace std;
void replace(char input[])
{
    int l = strlen(input);
    if (l == 0)
    {
        return;
    }
    if (input[0] == 'x')
    {
        for (int i = 0; i < l; i++)
        {
            input[i] = input[i + 1];
        }
        replace(input);
    }
    else // if first chsr is not 'x'
    {
        replace(input + 1);
    }
}

int main()
{
    char input[100];
    cout << "Enter the char: " << endl;
    cin >> input;
    replace(input);
    cout << input << endl;
}