#include <iostream>
#include <string>
using namespace std;
// GFG
class Solution
{
public:
    bool palindrome(string &str)
    {
        int s = 0;
        int e = str.length() - 1;

        while (s <= e)
        {
            if (str[s] != str[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};

int main()
{
    Solution obj;
    string s = "naman";
    if (obj.palindrome(s))
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}
