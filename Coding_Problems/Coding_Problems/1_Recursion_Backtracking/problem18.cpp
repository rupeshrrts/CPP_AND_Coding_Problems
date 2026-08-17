// // unique permutation of a set

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {

//     unordered_set<int> s;

//     // Insert elements
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(2); // duplicate (will NOT be added)

//     // Print elements
//     cout << "Set elements:\n";
//     for (int x : s)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Check if element exists
//     if (s.find(2) != s.end())
//     {
//         cout << "2 is present\n";
//     }
//     else
//     {
//         cout << "2 is NOT present\n";
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// class Solution
// {
// public:
//     // Function to generate unique permutations
//     void permute_uniq(int index, vector<int> nums, vector<vector<int>> &ans)
//     {

//         // Base case
//         if (index == nums.size())
//         {
//             ans.push_back(nums);
//             return;
//         }

//         unordered_set<int> s; // to avoid duplicates at current index

//         for (int i = index; i < nums.size(); i++)
//         {

//             // Skip duplicate elements
//             if (s.find(nums[i]) != s.end())
//                 continue;

//             s.insert(nums[i]);

//             swap(nums[index], nums[i]);

//             permute_uniq(index + 1, nums, ans);

//             // Backtrack
//             swap(nums[index], nums[i]);
//         }
//     }

//     vector<vector<int>> permuteUnique(vector<int> &nums)
//     {
//         vector<vector<int>> ans;

//         permute_uniq(0, nums, ans);

//         return ans;
//     }
// };

// int main()
// {
//     Solution obj;

//     // Input (with duplicates)
//     vector<int> nums = {1, 1, 2};

//     vector<vector<int>> result = obj.permuteUnique(nums);

//     cout << "Unique permutations:\n";

//     for (auto vec : result)
//     {
//         for (int x : vec)
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 2nd way

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    // Function to generate unique permutations
    void permute_uniq(int index, vector<int> nums, vector<vector<int>> &ans)
    {

        // Base case
        if (index == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> s; // to avoid duplicates at current index

        for (int i = index; i < nums.size(); i++)
        {

            // Skip duplicate elements
            if (s.find(nums[i]) != s.end())
                continue;

            s.insert(nums[i]);

            swap(nums[index], nums[i]);

            permute_uniq(index + 1, nums, ans);

            // Backtrack
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> ans;

        permute_uniq(0, nums, ans);

        return ans;
    }
};

int main()
{
    Solution obj;

    // Input (with duplicates)
    vector<int> nums = {1, 1, 2};

    vector<vector<int>> result = obj.permuteUnique(nums);

    cout << "Unique permutations:\n";

    for (auto vec : result)
    {
        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
