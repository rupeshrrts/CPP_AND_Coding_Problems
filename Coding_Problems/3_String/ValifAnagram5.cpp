#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // Step 1: Length check
        if (s.length() != t.length())
        {
            return false;
        }

        // Step 2: Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // Step 3: Compare
        return s == t;
    }
};

int main()
{
    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (obj.isAnagram(s, t))
    {
        cout << "Anagram hai" << endl;
    }
    else
    {
        cout << "Anagram nahi hai" << endl;
    }

    return 0;
}