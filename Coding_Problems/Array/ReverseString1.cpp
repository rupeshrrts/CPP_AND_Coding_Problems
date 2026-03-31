// // leetcode -344 Reverse String

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(int start, int end, vector<char> &s)
// {
//     if (start >= end)
//         return;

//     swap(s[start], s[end]);

//     solve(start + 1, end - 1, s);
// }
// int main()
// {
//     vector<char> s = {'h', 'e', 'l', 'i', 'o'};
//     int start = 0;
//     int end = s.size() - 1;
//     solve(start, end, s);

//     for (auto ans : s)
//     {
//         cout << ans << " ";
//     }
// }

// leetcode -344 Reverse String

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void solve(int start, int end, vector<char> &s)
    {
        if (start >= end)
            return;

        swap(s[start], s[end]);

        solve(start + 1, end - 1, s);
    }
    void ReverseString(vector<char> &s)
    {
        int start = 0;
        int end = s.size() - 1;
        solve(start, end, s);
    }
};

int main()
{
    Solution obj;

    vector<char> s = {'h', 'e', 'l', 'i', 'o'};
    obj.ReverseString(s);
    cout << "Reverse String : " << endl;
    for (auto ans : s)
    {
        cout << ans << " ";
    }
}