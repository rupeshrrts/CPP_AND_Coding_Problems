#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void solve(int index, string s, vector<string> &output, string tempResult)
    {
        // Base case
        if (index == s.size())
        {
            output.push_back(tempResult);
            return;
        }

        // Include character without space
        solve(index + 1, s, output, tempResult + s[index]);

        // Include character with space (if not last character)
        if (index != s.size() - 1)
        {
            solve(index + 1, s, output, tempResult + s[index] + " ");
        }
    }

    vector<string> permutation(string s)
    {
        vector<string> output;
        string tempResult = "";

        solve(0, s, output, tempResult);

        sort(output.begin(), output.end());
        return output;
    }
};

int main()
{
    Solution obj;

    string s;
    cout << "Enter string: ";
    cin >> s;

    vector<string> result = obj.permutation(s);

    cout << "\nPermutations with spaces:\n";
    for (string str : result)
    {
        cout << "(" << str << ")" << endl;
    }

    return 0;
}