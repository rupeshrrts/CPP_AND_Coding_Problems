// STL ARRAY

// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     array<int, 6> a;
//     a = {3, 4, 5, 6, 7, 7};
//     for (int i = 0; i < 6; i++)
//     {
//         cout << a[i] << endl;
//     }
// }

// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     array<int, 6> a;
//     a = {3, 4, 5, 6, 7, 8};
//     for (int i = 0; i < 6; i++)
//     {
//         cout << a.at(i) << endl;
//     }
// cout << "Size of array " << a.max_size();

// }

// STL Iterator for traverse
// iterator is just like pointer

// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {

//     array<int, 6> a = {3, 10, 5, 6, 7, 8};
//     array<int, 6>::iterator it;
//     it = a.begin();

//     cout << *it << endl;
//     it++;
//     cout << *it << endl;
// }

// // iterator can read write
// // 1   iterator
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {

//     array<int, 6> a = {3, 10, 5, 6, 7, 8};
//     array<int, 6>::iterator it;
//     it = a.begin();
//     cout << "1st iterator" << endl;

//     for (it = a.begin(); it != a.end(); it++)
//     {
//         cout << *it << " ";
//     }

//     cout << endl;
//     cout << "2nd iterator" << endl;
//     for (int x : a)
//     {
//         cout << x << " ";
//     }

//     cout << endl;
//     cout << "3rd iterator" << endl;
//     for (auto x : a)
//     {
//         cout << x << " ";
//     }

//     cout << endl;
//     cout << "updated  output " << endl;

//     for (it = a.begin(); it != a.end(); it++)
//     {
//         *it = *it + 1;
//     }
//     for (int x : a)
//     {
//         cout << x << " ";
//     }
// }

// // 2 const_iterator cant write only read means cant do (*it = *it + 1;)
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {

//     array<int, 6> a = {3, 10, 5, 6, 7, 8};
//     array<int, 6>::const_iterator it;
//     it = a.begin();

//     for (it = a.begin(); it != a.end(); it++)
//     {
//         *it = *it + 1;
//         cout << *it << " ";
//     }
// }

// // 3 reverse_iterator use to reverse with rbegin() and rend()
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {

//     array<int, 6> a = {3, 10, 5, 6, 7, 8};
//     array<int, 6>::reverse_iterator it;
//     // reverse_iterator will will only work with rbegin() and rend() so dont use forloop for traverse
//     cout << endl;
//     cout << "Reverse Corrected Print :" << endl;
//     for (it = a.rbegin(); it != a.rend(); it++) // will work perfact with rbegin() and r end()
//     {
//         *it = *it + 1;
//         cout << *it << " ";
//     }
// }

// // 3 const_reverse_iterator read only in reverse
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {

//     array<int, 6> a = {3, 10, 5, 6, 7, 8};
//     array<int, 6>::const_reverse_iterator it;
//     // reverse_iterator will will only work with rbegin() and rend() so dont use forloop for traverse
//     cout << endl;
//     cout << "Reverse Corrected Print :" << endl;
//     for (it = a.rbegin(); it != a.rend(); it++) // will work perfact with rbegin() and r end()
//     {
//         // *it = *it + 1;
//         cout << *it << " ";
//     }
// }

// // vector
// // also use size(), capacity()
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;         // empty vector
//     vector<int> v1(4);     // vector with 4 field with value 0
//     vector<int> v2(6, 20); // vector with 6 field with value 20
//     cout << "Size : " << v.size() << endl;
//     cout << "Size : " << v1.size() << endl;
//     cout << "Size : " << v2.size() << endl;

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl; // nothing will print
//     }
//     cout << endl;
//     for (int i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " "; // all value o will print
//     }
//     cout << endl;
//     for (int i = 0; i < v2.size(); i++)
//     {
//         cout << v2[i] << " "; // all value 20 will print
//     }

//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(7);
//     cout << endl;
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i] << endl;
//     // }
//     for (int x : v)
//     {
//         cout << x << endl;
//     }

//     // can update using auto
//     for (auto x : v)
//     {
//         cout << x << endl;
//     }
//     // cout << "total sixe of data avl :" << v.size() << endl; // will show total data in vector
//     // cout << "total capacity of vector :" << v.capacity();   // will show total capacity of vector
// }

// // iterator in vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;         // empty vector
//     vector<int> v1(4);     // vector with 4 field with value 0
//     vector<int> v2(6, 20); // vector with 6 field with value 20
//     vector<int>::iterator it;
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(7);
//     for (it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << endl;
//     }

//     for (auto it1 = v.begin(); it1 != v.end(); it1++)
//     {
//         cout << *it1 << endl;
//     }
// }

// // iterator in vector
// /// sixe in vector increase exponential 0-1-2-4-8.....
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()

// {
//     vector<int> v;
//     vector<int> v1(4);
//     vector<int> v2(6, 20);
//     vector<int>::iterator it;
//     cout << "Size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;
//     v.push_back(4);
//     cout << "Size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Capacity: " << v.size() << endl;
//     cout << "Size: " << v.capacity() << endl;
//     v.push_back(7);
//     cout << "size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;
//     v.push_back(89);
//     cout << "size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;
//     v.push_back(9);
//     cout << "size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;
//     cout << "Print:";
//     for (it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << endl;
//     }

//     for (auto it1 = v.begin(); it1 != v.end(); it1++)
//     {
//         cout << *it1 << endl;
//     }
// }

// // iterator in vector
// /// sixe in vector increase exponential 0-1-2-4-8.....
// #include <iostream>
// #include <vector>
// using namespace std;
// void display(vector<int> v)
// {
//     cout << "Print" << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
// }
// int main()

// {
//     vector<int> v;
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;
//     cout << "Enter all value of input " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     display(v);

//     // cout << " removed Item " << v.pop_back(); // The reason your code is not working is because pop_back() does not return a value.
//     v.pop_back(); // remove 30
//     display(v);
// }

// Pair operation
// #include<iostream>
// using namespace std;
// int main()
// {
//     // pair<int, int> p = {1, 2};
//     // cout << p.first << " " << p.second << endl;
//     // pair<int, string> p1 = {3, "rupesh"};
//     // cout << p1.first << " " << p1.second << endl;
//     // pair<int, int> p2 = make_pair(10, 20);
//     // cout << p2.first << " " << p2.second << endl;
//     // pair<int, pair<int, int>> p3 = {5, {6, 7}};
//     // cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;
//     // in graph
//     pair<int, int> edge[4] = {{1, 2},
//                               {2, 3},
//                               {3, 4},
//                               {1, 4}};
//     cout << " Graph edge : " << endl;
//     cout << edge[0].first << endl;
//     cout << edge[2].first << endl;
// }

// // iterator
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v = {3, 4, 6, 2, 7, 8, 23, 10};
//     vector<int>::iterator it;
//     it = v.begin();
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl;
//     // it++;
//     // cout << *it << endl; // garbadge value

//     for (it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << endl;
//     }
//     cout << "it!=(begin()+3): " << endl;
//     for (it = v.begin(); it != (v.begin() + 3); it++)
//     {
//         cout << *it << endl;
//     }
//     cout << "it=(begin()+3): " << endl;
//     for (it = (v.begin() + 3); it != v.end(); it++)
//     {
//         cout << *it << endl;
//     }
// }

// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     vector<int> v = {3, 4, 6, 2, 7, 9, 34, 98};
//     cout << "Print: " << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl; // v[] check out of bount means jrurt se jyada print nhi krega
//     }
//     cout << "Print: " << endl;
//     for (int i = 0; i < v.size(); i++) // at() check out of bount means jrurt ser jyada print nhi krega
//     {
//         cout << v.at(i) << endl;
//     }
//     cout << "back(): " << v.back() << endl;
//     cout << "front(): " << v.front() << endl;
//     v.erase(v.begin());
//     for (auto x : v)
//     {
//         cout << x << endl;
//     }
//     v.erase(v.begin() + 2);
//     cout << "After erage: v.erase(v.begin() + 2)" << endl;
//     for (auto x : v)
//     {
//         cout << x << endl;
//     }
//     v.insert(v.begin() + 2, 3);
//     cout << "After erage: insert(v.begin() + 2, 3)" << endl;
//     for (auto x : v)
//     {
//         cout << x << endl;
//     }

//     v.insert(v.begin(), 5, 0); // insert 4 0 at begning
//     cout << "After erage: insert(v.begin(), 5, 0)" << endl;
//     for (auto x : v)
//     {
//         cout << x << endl;
//     }
//     v.pop_back(); // cant return so dont do cout<<v.pop_back();
//     for (auto x : v)
//     {
//         cout << x << endl;
//     }
//     v.push_back(678); // cant return so dont do cout<<v.pop_back();
//     for (auto x : v)
//     {
//         cout << x << endl;
//     }
// }

// // Use of list for Double linklist
// #include <iostream>
// #include <list>

// using namespace std;
// int main()
// {
//     list<int> l;
//     list<int> l1 = {1, 2, 3, 4, 5, 6};
//     l.push_back(456);
//     l.push_front(40);
//     for (auto x : l)
//     {
//         cout << x << endl;
//     }

//     l1.pop_back();
//     l1.pop_front();
//     for (auto x : l1)
//     {
//         cout << x << endl;
//     }
// }

// // Use of Stack in STL
// #include <iostream>
// #include <stack>

// using namespace std;
// int main()
// {
//     stack<int> s; // in stacl cant traverse
//     cout << "Size of Stack Initaly: " << s.size() << endl;
//     s.push(3);
//     s.push(6);
//     s.push(8);
//     s.push(2);

//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         ;
//         s.pop();
//     }

//     s.push(8);
//     s.push(2);
//     cout << endl;
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
// }

// Use of  in STL
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<vector<int>> v; // in vector
    vector<int> v1 = {3, 4, 5, 6, 2, 4};
    v.push_back(v1);
    vector<int> v2 = {7, 8, 9, 6};
    v.push_back(v2);
    vector<int> v3 = {10, 11};
    v.push_back(v3);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}