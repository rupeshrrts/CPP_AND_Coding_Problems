
// 2. write all the permutation of the given string
#include <iostream>
#include <vector>
using namespace std;
void permute(int index, string input, vector<string> &ans)
{
    if (index == input.size())
    {
        ans.push_back(input);
        return;
    }
    for (int j = index; j < input.size(); j++)
    {
        swap(input[index], input[j]);
        permute(index + 1, input, ans);
        swap(input[index], input[j]); // foer undo the string for the next call
    }
}

int main()
{
    string input;
    cin >> input;
    vector<string> ans;
    permute(0, input, ans);
    for (auto elem : ans)
    {
        cout << elem << endl;
    }
}
