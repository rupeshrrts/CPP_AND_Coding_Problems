#include <iostream>
#include <string>
using namespace std;
// leetcode
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int s1 = s.length();
        int s2 = goal.length();
        if (s1 != s2)
        {
            return 0;
        }
        string update = s + s;
        if (update.find(goal) != string::npos) // size_t npos = -1;
        {
            return 1;
        }
        return 0;
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
