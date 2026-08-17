
#include <iostream>
using namespace std;
int main()
{

    string str = "Ruppeeeeeesshhftff";
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