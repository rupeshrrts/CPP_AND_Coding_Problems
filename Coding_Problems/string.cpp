#include <iostream>
using namespace std;
int main()
{
    // string *ptr = new string;
    // *ptr = "Rupesh";
    // cout << *ptr << endl;
    // string s1 = "rupesh";
    // s1 = "neeraj";
    // cout << s1 << endl;

    // string s;
    // cout << "Enter the Stirng: " << endl;
    // getline(cin, s);
    // cout << s[0] << endl;
    // s[1] = 't';
    // cout << s[1] << endl;
    // cout << s << endl;

    // string s1 = "Rupesh";
    // string s2 = "Singh";
    // string s3 = s1 + " " + s2;
    // cout << s3 << endl;

    // // string s4 = "1" + "Rahul"; // const char* + const char*
    // string s5 = 'i' + "Rahul"; // const char* + const char*
    // cout << s5 << endl;
    // string s4 = string("1") + "Rahul";
    // cout << s4 << endl;

    // string s1 = "pankaj";
    // string s2 = "Sharma";
    // string s3 = " ";
    // s1 = '1' + s3 + s2;
    // s2 = '1' + " " + s2; // cant do '1' is char and " " is const char* so cant combine

    // cout << s1;

    // array of string

    string *ptr = new string;     // ek string ka object
    string *ptr = new string[10]; // string of array
    ptr[0] = "Rupesh";
    ptr[1] = "Kuamr";
}
