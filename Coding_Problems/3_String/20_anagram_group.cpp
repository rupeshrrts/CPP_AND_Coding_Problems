// class Solution
// {
// public:
//     vector<vector<string>> groupAnagrams(vector<string> &strs)
//     {

//         // key  -> sorted string
//         // value -> all anagrams of that string
//         unordered_map<string, vector<string>> mp;

//         // Traverse every string
//         for (string str : strs)
//         {

//             // Make a copy and sort it
//             string temp = str;
//             sort(temp.begin(), temp.end());

//             // Store original string against sorted key
//             mp[temp].push_back(str);
//         }

//         // Store answer
//         vector<vector<string>> ans;

//         // Take all groups from map
//         for (auto it : mp)
//         {
//             ans.push_back(it.second);
//         }

//         return ans;
//     }
// };