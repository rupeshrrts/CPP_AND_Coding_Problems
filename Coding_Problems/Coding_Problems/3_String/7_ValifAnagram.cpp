// Level 1: Frequency Array / Hashing Basics
// ✅ 242. Valid Anagram (Done)
// 383. Ransom Note
// 389. Find the Difference
// 387. First Unique Character in a String
// 205. Isomorphic Strings
// 290. Word Pattern
// 451. Sort Characters By Frequency
// 49. Group Anagrams
// 169. Majority Element
// 219. Contains Duplicate II

#include <iostream>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=s.length()){
//             return false;
//         }
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         return s==t;

//     }
// };

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        int count[256] = {0};

        // for (int i = 0; i < s.length(); i++)
        // {
        //     count[s[i]]++;
        //     count[t[i]]--;
        // }
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            count[t[i]]--;
        }

        for (int i = 0; i < 256; i++)
        {
            if (count[i] != 0)
                return false;
        }
        return true;
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