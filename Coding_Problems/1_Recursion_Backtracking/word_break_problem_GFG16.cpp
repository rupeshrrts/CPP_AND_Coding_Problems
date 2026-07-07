#include <iostream>
#include <vector>
using namespace std;
bool solve(string input, vector<string> &dict)
{                          // why reference bcs ek hi dictionary se bar bar check krna hai copy bnakr koi fayda nhi hai
    if (input.size() == 0) // so if size zero then  "" retun 1
    {
        /* code */
        return 1; //"ilike" "i" + "like" ,check "like" ,"like" + "", success ✅
    }

    for (int i = 1; i <= input.size(); i++) // 1 se start esliye bcz 0-1 means ek char
    {
        string prefix = input.substr(0, i);

        for (int j = 0; j < dict.size(); j++)
        {
            if (prefix == dict[j])
            {
                return 1;
                // recursive call for remaining string
                if (solve(input.substr(i), dict)) // agr baki ka anster true hai the mera v truew hai
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{

    vector<string> dict = {
        "i", "like", "sam", "sung", "samsung",
        "mobile", "ice", "cream", "icecream",
        "man", "go", "mango"};
    // cout << "This is dictonary size : " << dict.size() << endl;
    string input = "ilike";

    if (solve(input, dict))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}