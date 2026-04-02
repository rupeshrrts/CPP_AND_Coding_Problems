// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     // Declaration
//     set<int> s;

//     // Insert
//     s.insert(4);
//     s.insert(2);
//     s.insert(2); // duplicate ignored
//     s.insert(1);

//     // Traversal (sorted)
//     cout << "Set: ";
//     for (int x : s)
//         cout << x << " ";

//     // Search
//     if (s.find(2) != s.end())
//         cout << "\n2 found";

//     // Delete
//     s.erase(2); // removes element 2
//     cout << endl;
//     cout << "Set: " << " ";
//     for (int x : s)
//         cout << x << " ";
//     // Size
//     cout << "\nSize: " << s.size();

//     // Lower Bound
//     cout << "\nLower bound of 2: " << *s.lower_bound(2);

//     return 0;
// }

// // C++ program to demonstrate unordered_set
// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     // Declaration
//     unordered_set<int> us;

//     // Insert
//     us.insert(4);
//     us.insert(2);
//     us.insert(2);
//     us.insert(3);
//     us.insert(2); // duplicate ignored
//     us.insert(1);

//     // Traversal (random order)
//     cout << "Unordered Set: ";
//     for (int x : us)
//         cout << x << " ";

//     // Search
//     if (us.find(2) != us.end())
//         cout << "\n2 found";

//     // Delete
//     us.erase(2);

//     // Size
//     cout << "\nSize: " << us.size();

//     return 0;
// }

// // multiset (Sorted, Duplicates Allowed)
// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     // Declaration
//     multiset<int> ms;

//     // Insert
//     ms.insert(4);
//     ms.insert(2);
//     ms.insert(3);
//     ms.insert(2); // duplicate allowed
//     ms.insert(1);

//     // Traversal (sorted with duplicates)
//     cout << "Multiset: ";
//     for (int x : ms)
//         cout << x << " ";

//     // Count occurrences
//     cout << "\nCount of 2: " << ms.count(2);

//     // Find (returns iterator to one occurrence)
//     auto it = ms.find(2);
//     if (it != ms.end())
//         cout << "\n2 found";

//     // Delete ONE occurrence
//     ms.erase(ms.find(2));

//     // Delete ALL occurrences
//     ms.erase(2);

//     return 0;
// }