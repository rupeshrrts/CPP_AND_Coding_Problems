#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void solve(int index, vector<int> &candidates, int target,
               vector<int> &temp, vector<vector<int>> &output)
    {

        // Base case
        if (target == 0)
        {
            output.push_back(temp);
            return;
        }

        // Stop condition
        if (index == candidates.size() || target < candidates[index])
        {
            return;
        }

        // Take element
        temp.push_back(candidates[index]);
        solve(index, candidates, target - candidates[index], temp, output);
        temp.pop_back();

        // Skip element
        solve(index + 1, candidates, target, temp, output);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> output;
        vector<int> temp;

        solve(0, candidates, target, temp, output);

        return output;
    }
};

int main()
{
    Solution obj;

    vector<int> candidates = {8, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = obj.combinationSum(candidates, target);

    cout << "Combinations are:\n";

    for (auto &vec : result)
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