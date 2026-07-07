

// // return all subsequence of the given string
// input : abc   output : "" ,a,b,c,ab,ac,bc,abc
// #include <iostream>
// using namespace std;
// // int subseq(string input, string output[]) // array dikahne  ke liye [ ] eski need hai na ki ek string dikhane ke li wahi agr char input hota to input[ ] dikhana padta bcs char ka array bnta

// // output[] wala esliye array bna hai bcs esme multiple string aayega so ye string ka array bna hai ahe esme v ek string aata to array nhibnta
// int subseq(string input, string output[])
// {
//     if (input.size() == 0)
//     {
//         output[0] = "";
//         return 1;
//     }

//     int smallSize = subseq(input.substr(1), output); //'abcd' then return after this substr(1) 'bcd'
//     for (int i = 0; i < smallSize; i++)
//     {
//         output[i + smallSize] = input[0] + output[i];
//     }
//     return 2 * smallSize;
// }
// int main()
// {
//     string input;
//     cin >> input;
//     string *output = new string[100];
//     int count = subseq(input, output);
//     for (int i = 0; i < count; i++)
//     {
//         cout << output[i] << endl;
//     }
// }

// // 2nd way
// // return all subsequence of the given string
// #include <iostream>
// using namespace std;
// int subseq(string original, string tillNow[])
// {
//     if (original.size() == 0)
//     {
//         cout << tillNow << " ";
//     }

//     subseq(original.substr(1), tillNow + original[0]); // when select a
//     subseq(original.substr(1), tillNow);               // when not select a
// }
// int main()
// {
//     string original;
//     cin >> original;
//     string *tillNow = new string[100];
//     int count = subseq(original, tillNow);
//     // to print all string in tillNow
//     for (int i = 0; i < count; i++)
//     {
//         cout << tillNow[i] << endl;
//     }
// }

// // 2nd way
// // print all the subsequences
// #include <iostream>
// using namespace std;

// void subseq(string original, string tillNow)
// {
//     if (original.size() == 0)
//     {
//         cout << tillNow << endl;
//         return;
//     }

//     // include first character
//     subseq(original.substr(1), tillNow + original[0]);

//     // exclude first character
//     subseq(original.substr(1), tillNow);
// }

// int main()
// {
//     string original;
//     cin >> original;
//     subseq(original, "");
// }

// // 2nd way
// //  print all the subsequences
// #include <iostream>
// using namespace std;

// void subseq(int index, string original, string tillNow)
// {
//     if (original.size() == index)
//     {
//         cout << tillNow << endl;
//         return;
//     }

//     // include first character
//     subseq(index + 1, original, tillNow + original[index]);

//     // exclude first character
//     subseq(index + 1, original, tillNow);
// }

// int main()
// {
//     string original;
//     cin >> original;
//     subseq(0, original, "");
// }

// // 2nd way
// #include <iostream>
// #include <vector>
// using namespace std;

// void subseq(string original, string tillNow, vector<string> &v)
// {
//     if (original.size() == 0)
//     {
//         v.push_back(tillNow);
//         return;
//     }

//     // include first character
//     subseq(original.substr(1), tillNow + original[0], v);

//     // exclude first character
//     subseq(original.substr(1), tillNow, v);
// }

// int main()
// {
//     vector<string> v;
//     string original;
//     cin >> original;

//     subseq(original, "", v);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
// }

// 2nd way
#include <iostream>
#include <vector>
using namespace std;

void subseq(int index, string original, string tillNow, vector<string> &v)
{
    if (original.size() == index)
    {
        v.push_back(tillNow);
        return;
    }

    // include first character
    subseq(index + 1, original, tillNow + original[index], v);

    // exclude first character
    subseq(index + 1, original, tillNow, v);
}

int main()
{
    vector<string> v;
    string original;
    cin >> original;

    subseq(0, original, "", v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
