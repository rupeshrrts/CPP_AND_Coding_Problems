// // keypadd problem

// #include <iostream>
// using namespace std;

// void Generate(int index, string input, string abtk, string map[])
// {
//     if (index == input.size())
//     {
//         cout << abtk << " ";
//         return;
//     }
//     int x = input[index] - '0'; // extract kr  liya 2 ko from input '234'
//     string val = map[x];        // val me map[x]  ===> "abc" hoga

//     if (val.size() == 0)
//     {
//         Generate(index + 1, input, abtk, map);
//     }
//     else
//     {
//         for (int i = 0; i < val.size(); i++)
//         {
//             Generate(index + 1, input, abtk + val[i], map);
//         }
//     }
// }
// int main()
// {

//     string map[] = {"",
//                     "",
//                     "abc",
//                     "def",
//                     "ghi",
//                     "jkl",
//                     "mno",
//                     "pqrs",
//                     "tuv",
//                     "wxyz"};
//     string abtk = "";
//     string input;
//     cin >> input;

//     Generate(0, input, abtk, map);
// }

// keypadd problem

#include <iostream>
#include <vector>
using namespace std;

void Generate(int index, string input, string abtk, string map[], vector<string> &ans)
{
    if (index == input.size())
    {
        ans.push_back(abtk);
        return;
    }
    int x = input[index] - '0'; // extract kr  liya 2 ko from input '234'
    string val = map[x];        // val me map[x]  ===> "abc" hoga

    if (val.size() == 0)
    {
        Generate(index + 1, input, abtk, map, ans);
    }
    else
    {
        for (int i = 0; i < val.size(); i++)
        {
            Generate(index + 1, input, abtk + val[i], map, ans);
        }
    }
}
int main()
{

    string map[] = {"",
                    "",
                    "abc",
                    "def",
                    "ghi",
                    "jkl",
                    "mno",
                    "pqrs",
                    "tuv",
                    "wxyz"};
    string abtk = "";
    vector<string> ans;
    string input;
    cin >> input;

    Generate(0, input, abtk, map, ans);

    for (auto str : ans)
    {
        cout << str << " ";
    }
}