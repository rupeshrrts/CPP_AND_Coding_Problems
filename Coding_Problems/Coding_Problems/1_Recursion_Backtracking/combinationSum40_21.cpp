#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<int> &candidates, int target, int index,
               vector<int> &abtk, vector<vector<int>> &output)
    {

        // ✅ Base case
        if (target == 0)
        {
            output.push_back(abtk);
            return;
        }

        for (int i = index; i < candidates.size(); i++)
        {

            // 🔥 Skip duplicates
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            // ❌ If element is greater than target, stop
            if (candidates[i] > target)
                break;

            // ✅ Choose element
            abtk.push_back(candidates[i]);

            // Move to next index (i+1 → no reuse)
            solve(candidates, target - candidates[i], i + 1, abtk, output);

            // 🔙 Backtrack
            abtk.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());

        vector<int> abtk;
        vector<vector<int>> output;

        solve(candidates, target, 0, abtk, output);

        return output;
    }
};

int main()
{
    Solution obj;

    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> result = obj.combinationSum2(candidates, target);

    cout << "Combinations are:\n";

    for (auto &vec : result)
    {
        cout << "[ ";
        for (int num : vec)
        {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}