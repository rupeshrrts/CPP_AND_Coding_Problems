#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s2, string s1)
    {
        int n = s1.length();
        int m = s2.length();

        int i = 0, j = 0;

        // for (i = 0; i < n && j < m; i++)
        // {
        //     if (s1[i] == s2[j])
        //     {
        //         j++;
        //     }
        // }

        while (i < n && j < m)
        {
            if (s1[i] == s2[j])
            {
                j++;
            }
            i++; // when while is use
        }

        return j == m;
    }
};

int main()
{
    Solution obj;

    string s1 = "adskd", s2 = "adk";

    // cout << "Enter main string (s1): ";
    // cin >> s1;

    // cout << "Enter subsequence string (s2): ";
    // cin >> s2;

    if (obj.isSubsequence(s2, s1))
    {
        cout << "s2 is a subsequence of s1" << endl;
    }
    else
    {
        cout << "s2 is NOT a subsequence of s1" << endl;
    }

    return 0;
}