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

    // string *ptr = new string;     // ek string ka object
    // string *ptr = new string[10]; // string of array
    // ptr[0] = "Rupesh";
    // ptr[1] = "Kuamr";

    string input = "abcde";
    string s7 = input.substr(1);
    cout << s7; // bcde
}

// Benefit of Dynamic Allocation
// 1️⃣ Size decided at runtime

// You don't need to know the size beforehand.

// int n;
// cin >> n;

// int *arr = new int[n];

// Example:

// Input

// 100000

// The program still works.

// 2️⃣ Stack memory limit problem avoided

// Normal arrays are stored in stack memory, which is small.

// Example:

// int arr[10000000];   // may cause stack overflow

// Dynamic arrays are stored in heap memory, which is larger.

// 3️⃣ Flexible memory usage

// Memory can be created and destroyed when needed.

// delete[] arr;

// This frees the memory.

// Problems With Dynamic Arrays
// 1️⃣ Memory leak risk

// If you forget:

// delete[] arr;

// Memory stays occupied.