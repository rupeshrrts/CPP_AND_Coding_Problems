// #include <bits/stdc++.h>
// using namespace std;
// #include <vector>
// #include <set>
//// uniun of 2  sorted array
// class Solution
// {
// public:
//     vector<int> findUnion(vector<int> &a, vector<int> &b)
//     {
//         // code here
//         set<int> s;
//         for (int i = 0; i < a.size(); i++)
//         {
//             s.insert(a[i]);
//         }

//         for (int i = 0; i < b.size(); i++)
//         {
//             s.insert(b[i]);
//         }

//         vector<int> v;
//         for (auto x : s)
//         {
//             v.push_back(x);
//         }
//         return v;
//     }
// };

// int main()
// {
//     Solution obj;
//     vector<int> a = {1, 2, 3, 4, 5};
//     vector<int> b = {1, 2, 3};

//     // vector<int> ans = obj.findUnion(a, b);
//     vector<int> ans = obj.findUnion(a, b);

//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

//// union of 2 unsorted array
// class Solution {
//   public:
//     vector<int> findUnion(vector<int>& a, vector<int>& b) {
//         // code here
//         unordered_set<int>s;
//         for(int i=0;i<a.size();i++)
//         {s.insert(a[i]);}

//         for(int i=0;i<b.size();i++)
//         {s.insert(b[i]);}
//         vector<int>v;
//         for(auto  element: s){
//             v.push_back(element);
//         }
//         return v;
//     }
// };

// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

// class Solution {
//   public:
//     vector<int> findUnion(vector<int> &a, vector<int> &b) {
//         // code here

//         set<int> s;

//         for(int x : a){
//             s.insert(x);
//         }

//          for(int y : b){
//             s.insert(y);
//         }

//         vector<int> result;
//         for( int m: s){
//             result.push_back(m);
//         }

//         return result;
//     }
// };