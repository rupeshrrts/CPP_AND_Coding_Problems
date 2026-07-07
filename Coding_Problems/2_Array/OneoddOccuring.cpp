//// gfg one Odd Occurence
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int getOddOccurrence(vector<int> &arr)
    {
        int abtk = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            abtk = abtk ^ arr[i];
        }
        return abtk;
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {1, 2, 3, 2, 3, 1, 3}; // 3 appears odd times

    int result = obj.getOddOccurrence(arr);

    cout << "Element with odd occurrence: " << result << endl;

    return 0;
}