
// multiset (Sorted, Duplicates Allowed)
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    // vector<int> nums1 = {1, 2, 2, 1};
    // vector<int> nums2 = {1, 3, 2, 2, 5, 8};

    // // Declaration
    // multiset<int> ms1(nums1.begin(), nums1.end());
    // multiset<int> ms2(nums2.begin(), nums2.end());

    // cout << "Multiset1: ";
    // for (int x : ms1)
    //     cout << x << " ";
    // cout << endl;
    // cout << "Multiset2: ";
    // for (int x : ms2)
    //     cout << x << " ";

    // multiset<int> ms3;
    // for (int x : ms1)
    // {
    //     auto it = ms2.find(x);

    //     if (it != ms2.end())
    //     {
    //         ms3.insert(x); // intersection
    //         ms2.erase(it); // remove one occurrence
    //     }
    // }
    // cout << endl;
    // for (int x : ms3)
    // {
    //     cout << x << " ";
    // }

    class Solution
    {
    public:
        vector<int> intersection(vector<int> &arr1, vector<int> &arr2)
        {
            int m = arr1.size();
            int n = arr2.size();

            set<int> ans;

            sort(arr1.begin(), arr1.end());
            sort(arr2.begin(), arr2.end());

            int i = 0;
            int j = 0;

            while (i < m && j < n)
            {
                if (arr1[i] == arr2[j])
                {
                    ans.insert(arr1[i]);
                    i++;
                    j++;
                }
                else if (arr1[i] > arr2[j])
                {
                    j++;
                }
                else
                {
                    i++;
                }
            }
            vector<int> v;

            for (auto it : ans)
            {
                v.push_back(it);
            }
            return v;
        }
    };
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int main() {
//     vector<int> nums1 = {1, 2, 2, 1};
//     vector<int> nums2 = {1, 3, 2, 2, 5, 8};

//     unordered_map<int, int> freq;

//     // Count elements of nums1
//     for (int x : nums1)
//         freq[x]++;

//     vector<int> result;

//     // Check nums2
//     for (int x : nums2) {
//         if (freq[x] > 0) {
//             result.push_back(x);
//             freq[x]--;   // reduce count
//         }
//     }

//     // Output
//     for (int x : result)
//         cout << x << " ";

//     return 0;
// }