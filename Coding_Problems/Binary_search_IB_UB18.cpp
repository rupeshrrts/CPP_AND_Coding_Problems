// // Lower bound

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *ptr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ptr[i];
//     }
//     sort(ptr, ptr + n);
//     cout << "Output is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << ptr[i] << " ";
//     }
//     cout << endl;
//     int *tmp = lower_bound(ptr, ptr + n, 5);
//     cout << "Lower Bound is: " << *tmp << endl;
// }

// Lower bound

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *ptr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ptr[i];
//     }
//     sort(ptr, ptr + n);
//     cout << "Output is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << ptr[i] << " ";
//     }
//     cout << endl;

//     int *tmp = lower_bound(ptr, ptr + n, 500);
//     if (tmp == ptr + n)
//     {
//         cout << " Element not present and no higher element present also: " << endl;
//     }
//     else
//     {
//         cout << "Lower Bound is: " << *tmp << endl;
//     }
// }

// // using vector
// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     int *ptr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     cout << "Output is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     auto it = lower_bound(arr.begin(), arr.end(), 5);
//     if (it == arr.end())
//     {
//         cout << " Element not present and no higher element present also: " << endl;
//     }
//     else
//     {
//         cout << "Lower Bound is: " << *it << endl;
//     }
// }

// /// min max
// #include <iostream>
// #include <set>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     cout << endl;

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Minimum element
//     auto it1 = v.begin();
//     cout << "Min Element: " << *it1 << endl;

//     // Maximum element
//     auto it2 = v.rbegin();
//     cout << "Max Element: " << *it2 << endl;

//     // lower_bound
//     auto it = lower_bound(v.begin(), v.end(), 7);

//     int max = *(max_element(v.begin(), v.end()));

//     if (it == v.end())
//     {
//         cout << "Element not present and no higher element present also" << endl;
//     }
//     else
//     {
//         cout << "Lower Bound is: " << *it << endl;
//     }

//     int smallest = *min_element(v.begin(), v.end());

//     cout << "Smallest element is: " << smallest << endl;

// }
