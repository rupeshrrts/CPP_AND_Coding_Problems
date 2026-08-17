#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void ComSum(int k, int n, int start, vector<int> abtk, vector<vector<int>> &output)
    {

        if (k == 0 && n == 0)
        {
            output.push_back(abtk);
            return;
        }

        if (k == 0 || n < 0)
        {
            return;
        }

        for (int i = start; i <= 9; i++)
        {

            if (i > n)
                break;

            abtk.push_back(i);
            ComSum(k - 1, n - i, i + 1, abtk, output);
            abtk.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {

        vector<int> abtk;
        vector<vector<int>> output;

        ComSum(k, n, 1, abtk, output);
        return output;
    }
};

int main()
{

    Solution obj;

    int k = 3;
    int n = 7;

    vector<vector<int>> result = obj.combinationSum3(k, n);

    cout << "Combinations are:\n";

    for (auto vec : result)
    {
        cout << "[ ";
        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}