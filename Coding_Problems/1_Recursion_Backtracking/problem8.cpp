// Generate all valid combinations of balanced parentheses using recursion
#include <iostream>
using namespace std;
void Generate(string abtak, int open, int close)
{
    if (open == 0 && close == 0)
    {
        cout << abtak << endl;
        return;
    }

    if (open > 0)
    {
        Generate(abtak + "(", open - 1, close);
    }
    if (close > 0 && open < close)
    {
        Generate(abtak + ")", open, close - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    // string abtk = "";
    // Generate(abtk, n, n);
    Generate("", n, n);
    return 0;
}

// // HW Problem_7
// // Print every string that has equal number of a and b

// #include <iostream>
// using namespace std;
// void Generate(string s, int a, int b)
// {
//     if (a == 0 && b == 0)
//     {
//         cout << s << endl;
//         return;
//     }

//     if (a > 0)
//     {
//         Generate(s + "a", a - 1, b);
//     }
//     if (b > 0)
//     {

//         Generate(s + "b", a, b - 1);
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;
//     Generate("", n, n);
//     return 0;
// }
