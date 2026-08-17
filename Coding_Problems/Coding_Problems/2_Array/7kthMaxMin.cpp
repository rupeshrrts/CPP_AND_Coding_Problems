// Priority Queue

// A priority_queue stores elements in a way that:
// Highest priority element comes first
// By default → Max Heap

// | Function  | Description        |
// | --------- | ------------------ |
// | `push(x)` | Insert element     |
// | `pop()`   | Remove top element |
// | `top()`   | Access top element |
// | `empty()` | Check if empty     |
// | `size()`  | Number of elements |

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // priority_queue<int> pq;   // Max Heap (default)
    // pq.push(28);
    // pq.push(13);
    // pq.push(22);
    // pq.push(56);
    // pq.push(29);
    // pq.push(8);

    // cout<<"Top Element : "<<pq.top()<<endl;
    // cout<<"Size : "<<pq.size();

    // priority_queue<pair<int,int>> pq;
    // pq.push({1, 10});
    // pq.push({2, 5});
    // pq.push({1, 6});
    //     cout << pq.top().first << " " << pq.top().second << endl;

    // priority_queue<int, vector<int>, greater<int>> pq;
    // pq.push(23);
    // pq.push(45);
    // pq.push(5);
    // pq.push(12);

    // cout<<"TOP Element : "<<pq.top() <<endl;
    // cout<<"Size: "<<pq.size();

    // //  for kth smallest
    //  int arr[] = {7, 10, 6, 3, 20, 15,56,18,78};
    //     int k = 3;

    //     priority_queue<int> pq;

    //     for (int i = 0; i < 9; i++) {
    //         pq.push(arr[i]);
    //         if (pq.size() > k)
    //             pq.pop();

    //     }
    //     cout << "Kth smallest element: " << pq.top();

    //  for kth greater
    vector<int> v = {7, 10, 6, 3, 20, 15, 56, 18, 78};
    int k = 5;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < 9; i++)
    {
        pq.push(v[i]);
        if (pq.size() > k)
            pq.pop();
    }
    cout << "Kth greater element: " << pq.top();

    // leetcode 215. Kth Largest Element in an Array

    //     class Solution {
    // public:
    //     int findKthLargest(vector<int>& nums, int k) {
    //         priority_queue<int,vector<int>,greater<int>> pq;
    //         for(int i=0;i<nums.size();i++){
    //             pq.push(nums[i]);
    //             if(pq.size()>k){
    //                 pq.pop();
    //             }
    //         }
    //         return pq.top();

    //     }
    // };
}

// 1. What is a Priority Queue?

// A Priority Queue is a special type of queue in which elements are processed according to their priority, not according to the order in which they were inserted.

// In a normal queue, the first inserted element is removed first (FIFO).
// In a priority queue, the element with the highest priority is removed first.

// In C++, priority_queue is implemented using a Heap.

// There are two types:

// Max Heap (Default)
// Min Heap
// 2. Header File
// #include <queue>
// 3. Syntax
// Max Heap (Default)
// priority_queue<int> pq;

// Largest element is always at the top.

// Example:

// Insert:
// 10 5 20 15

// Heap

//       20
//      /  \
//    15   10
//    /
//   5

// Top = 20
// Min Heap
// priority_queue<int, vector<int>, greater<int>> pq;

// Smallest element is always at the top.

// Example

// Insert:
// 10 5 20 15

// Heap

//       5
//      / \
//    10 20
//    /
//  15

// Top = 5
// 4. Operations
// 1. push()

// Adds a new element.

// Syntax
// pq.push(value);

// Example

// priority_queue<int> pq;

// pq.push(10);
// pq.push(50);
// pq.push(20);

// Heap

//      50
//     /  \
//   10   20

// Time Complexity

// O(log n)
// 2. pop()

// Removes the top element.

// Syntax
// pq.pop();

// Example

// Before

// 50
// 20
// 10

// After

// 20
// 10

// Time Complexity

// O(log n)
// 3. top()

// Returns the highest priority element.

// Syntax
// cout << pq.top();

// Output

// 50

// Time Complexity

// O(1)
// 4. size()

// Returns the number of elements.

// cout << pq.size();

// Output

// 4

// Time Complexity

// O(1)
// 5. empty()

// Checks whether the queue is empty.

// if(pq.empty())
//     cout<<"Empty";
// else
//     cout<<"Not Empty";

// Returns

// true
// false

// Time Complexity

// O(1)
// 6. swap()

// Swaps two priority queues.

// priority_queue<int> pq1;
// priority_queue<int> pq2;

// pq1.push(10);
// pq2.push(100);

// pq1.swap(pq2);

// Time Complexity

// O(1)
// 5. Complete Example
// #include<iostream>
// #include<queue>

// using namespace std;

// int main()
// {
//     priority_queue<int> pq;

//     pq.push(10);
//     pq.push(50);
//     pq.push(20);
//     pq.push(100);

//     cout<<"Top : "<<pq.top()<<endl;

//     cout<<"Size : "<<pq.size()<<endl;

//     pq.pop();

//     cout<<"After Pop : "<<pq.top()<<endl;

//     cout<<"Size : "<<pq.size()<<endl;

//     return 0;
// }

// Output

// Top : 100
// Size : 4
// After Pop : 50
// Size : 3
// 6. Traversing a Priority Queue

// Priority Queue cannot be traversed directly.

// ❌ Wrong

// for(auto x : pq)

// Reason

// priority_queue has no iterator.

// Correct

// while(!pq.empty())
// {
//     cout<<pq.top()<<" ";
//     pq.pop();
// }

// Output

// 100 50 20 10
// 7. Copying a Priority Queue
// priority_queue<int> copy = pq;

// Now

// while(!copy.empty())
// {
//     cout<<copy.top()<<" ";
//     copy.pop();
// }

// Original queue remains unchanged.

// 8. Max Heap

// Declaration

// priority_queue<int> pq;

// Insert

// 10
// 50
// 20
// 100

// Output

// 100
// 50
// 20
// 10

// Largest always comes first.

// 9. Min Heap

// Declaration

// priority_queue<int, vector<int>, greater<int>> pq;

// Insert

// 10
// 50
// 20
// 100

// Output

// 10
// 20
// 50
// 100

// Smallest always comes first.

// 10. Priority Queue of Pairs

// Declaration

// priority_queue<pair<int,int>> pq;

// Insert

// pq.push({5,100});
// pq.push({2,50});
// pq.push({10,20});

// Output

// 10 20
// 5 100
// 2 50

// Sorting is based on

// First element

// ↓

// Second element
// Min Heap of Pair
// priority_queue<pair<int,int>,
//                vector<pair<int,int>>,
//                greater<pair<int,int>>> pq;
// 11. Custom Comparator

// Example

// class Compare
// {
// public:

//     bool operator()(int a,int b)
//     {
//         return a>b;
//     }
// };

// priority_queue<int, vector<int>, Compare> pq;

// Used when you want custom sorting.

// 12. Time Complexity
// Operation	Complexity
// push()	O(log n)
// pop()	O(log n)
// top()	O(1)
// size()	O(1)
// empty()	O(1)
// swap()	O(1)
// 13. Heap Size

// After

// priority_queue<int> pq;

// pq.push(10);
// pq.push(20);
// pq.push(30);

// Heap

// 30
// 20
// 10

// Size

// 3
// 14. When to Use Max Heap

// Use Max Heap when you need

// Largest element
// kth Smallest
// Running maximum
// Largest priority
// Scheduling highest priority jobs

// Example

// Find largest element

// Find kth smallest

// Maximum score

// Highest marks
// 15. When to Use Min Heap

// Use Min Heap when you need

// Smallest element
// kth Largest
// Merge K Sorted Lists
// Dijkstra's Algorithm
// Huffman Coding

// Example

// Shortest distance

// Smallest value

// Least cost
// 16. Difference Between Max Heap and Min Heap
// Max Heap	Min Heap
// Largest element on top	Smallest element on top
// priority_queue<int>	priority_queue<int, vector<int>, greater<int>>
// Used for kth Smallest	Used for kth Largest
// 17. Common Interview Problems
// Easy
// Kth Largest Element
// Kth Smallest Element
// Last Stone Weight
// Connect Ropes
// Medium
// Top K Frequent Elements
// K Closest Points to Origin
// Merge K Sorted Arrays
// Merge K Sorted Linked Lists
// Hard
// Find Median from Data Stream
// Sliding Window Median
// IPO Problem
// Minimum Cost to Hire Workers
// 18. Common Mistakes
// Forgetting greater<int> for Min Heap

// ❌ Wrong

// priority_queue<int> pq;

// ✔ Correct

// priority_queue<int, vector<int>, greater<int>> pq;
// Calling top() on an Empty Queue

// ❌ Wrong

// cout << pq.top();

// Always check:

// if (!pq.empty())
// {
//     cout << pq.top();
// }
// Trying to Iterate Directly

// ❌ Wrong

// for(auto x : pq)

// ✔ Correct

// while(!pq.empty())
// {
//     cout << pq.top() << " ";
//     pq.pop();
// }
// 19. Interview Cheat Sheet
// Task	Heap
// Largest element	Max Heap
// Smallest element	Min Heap
// kth Largest	Min Heap (size = k)
// kth Smallest	Max Heap (size = k)
// Top K Frequent	Min Heap
// Merge K Lists	Min Heap
// Dijkstra	Min Heap
// Huffman Coding	Min Heap
// 20. Rules to Remember
// priority_queue<int> → Max Heap
// priority_queue<int, vector<int>, greater<int>> → Min Heap
// push() inserts an element in O(log n)
// pop() removes the top element in O(log n)
// top() returns the highest-priority element in O(1)
// priority_queue has no iterators, so use top() and pop() to process elements.
// For kth Smallest, maintain a Max Heap of size k.
// For kth Largest, maintain a Min Heap of size k.

// These notes cover almost everything you need to confidently use priority_queue in interviews and competitive programming.

// https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

// Step 6: General Idea

// Keep only

// k elements

// Whenever a smaller number comes

// Replace the largest.

// Algorithm

// For every element

// If heap size < k

// Insert

// push()

// Else

// Compare

// current

// vs

// heap.top()

// If current is smaller

// pop()

// push(current)

// Else

// Ignore.

// At the end

// heap.top()

// is the kth smallest.

// Step 7: Dry Run

// Array

// 7 10 4 3 20 15

// k=3

// Start

// Heap

// 7
// 7 10
// 7 10 4

// Largest

// 10

// Next

// 3

// Compare

// 3 < 10

// Replace

// Heap

// 7
// 4
// 3

// Largest

// 7

// Next

// 20

// Compare

// 20 > 7

// Ignore

// Next

// 15

// Compare

// 15 > 7

// Ignore

// End

// Heap

// 7
// 4
// 3

// Largest

// 7

// Answer

// 7

// //gfg
// class Solution
// {
// public:
//     int kthSmallest(vector<int> &arr, int k)
//     {

//         priority_queue<int> pq; // Max Heap

//         for (int x : arr)
//         {

//             // Fill the heap with first k elements
//             if (pq.size() < k)
//             {
//                 pq.push(x);
//             }

//             // If current element is smaller than the largest
//             // among the k smallest, replace it
//             else if (x < pq.top())
//             {
//                 pq.pop();
//                 pq.push(x);
//             }
//         }

//         return pq.top();
//     }
// };

// // leetcode 378 matrix form
// class Solution
// {
// public:
//     int kthSmallest(vector<vector<int>> &matrix, int k)
//     {
//         priority_queue<int> pq;
//         for (auto &row : matrix)
//         {
//             for (int x : row)
//             {
//                 if (pq.size() < k)
//                 {
//                     pq.push(x);
//                 }
//                 else if (x < pq.top())
//                 {
//                     pq.pop();
//                     pq.push(x);
//                 }
//             }
//         }
//         return pq.top();
//     }
// };

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {

        // Max Heap
        priority_queue<int> pq;

        // Traverse every element in the matrix
        for (auto &row : matrix)
        {

            for (int x : row)
            {

                if (pq.size() < k)
                {
                    pq.push(x);
                }
                else if (x < pq.top())
                {
                    pq.pop();
                    pq.push(x);
                }
            }
        }
        return pq.top();
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}};

    int k = 8;
    Solution obj;
    cout << "Kth Smallest Element = "
         << obj.kthSmallest(matrix, k);
    return 0;
}

// https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/2051970295/
// // kth largest element leetcode 215
// class Solution
// {
// public:
//     int findKthLargest(vector<int> &nums, int k)
//     {

//         // Min Heap to store the k largest elements
//         priority_queue<int, vector<int>, greater<int>> pq;

//         // Traverse all elements
//         for (int x : nums)
//         {

//             // Insert the first k elements into the heap
//             if (pq.size() < k)
//             {
//                 pq.push(x);
//             }

//             // If the current element is larger than
//             // the smallest element in the heap,
//             // replace the smallest element
//             else if (x > pq.top())
//             {
//                 pq.pop();
//                 pq.push(x);
//             }
//         }

//         // The top of the Min Heap is the kth largest element
//         return pq.top();
//     }
// };
