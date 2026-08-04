#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {

        string result = "1"; // start

        for (int i = 2; i <= n; i++)
        {
            string next = "";
            int count = 1;

            for (int j = 0; j < result.length(); j++)
            {

                // agar next char same hai
                if (j + 1 < result.length() && result[j] == result[j + 1])
                {
                    count++;
                }
                else
                {
                    // count + number add karo
                    next = next + to_string(count) + result[j];
                    count = 1;
                }
            }

            result = next; // update
        }

        return result;
    }
};

int main()
{
    Solution obj;
    cout << obj.countAndSay(3);
    return 0;
}

// class Solution {
// public:
//     string countAndSay(int n) {

//         if(n == 1) return "1";

//         string s = "1";

//         for(int i = 2; i <= n; i++) {
//             string temp = "";
//             int count = 1;

//             for(int j = 1; j < s.length(); j++) {
//                 if(s[j] == s[j-1]) {
//                     count++;
//                 } else {
//                     temp += to_string(count);
//                     temp += s[j-1];
//                     count = 1;
//                 }
//             }

//             // last character handle
//             temp += to_string(count);
//             temp += s.back();

//             s = temp;
//         }

//         return s;
//     }
// };