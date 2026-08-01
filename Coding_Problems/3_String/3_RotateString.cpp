#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// leetcode
class Solution
{
public:
    // bool rotateString(string s, string goal)
    // {
    //     int s1 = s.length();
    //     int s2 = goal.length();
    //     if (s1 != s2)
    //     {
    //         return 0;
    //     }
    //     string update = s + s;
    //     if (update.find(goal) != string::npos) // size_t npos = -1;
    //     {
    //         return 1;
    //     }
    //     return 0;
    // }

    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;

        for (int i = 0; i < s.length(); i++)
        {
            // rotate(s.begin(), s.begin() + 1, s.end());

            char first = s[0];
            s.erase(s.begin());
            s.push_back(first);

            if (s == goal)
                return true;
        }

        return false;
    }
};

int main()
{
    Solution obj;
    string s = "abcde";
    // string goal = "cdeba";
    string goal = "cdeab";

    if (obj.rotateString(s, goal))
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}
