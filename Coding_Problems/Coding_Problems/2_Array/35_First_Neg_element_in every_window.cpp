// 1. What is a Deque?

// A Deque (Double Ended Queue) is a container in C++ STL that allows you to insert and delete elements from both the front and the back in O(1) time.

// Unlike a queue, where insertion is at the back and deletion is at the front, a deque supports both ends.

// #include <deque>
// using namespace std;

// deque<int> dq;
// 2. Why is it called Double Ended Queue?

// Because operations can be performed from both ends.

// Front                               Back

// +-----+-----+-----+-----+-----+
// | 10  | 20  | 30  | 40  | 50  |
// +-----+-----+-----+-----+-----+

//  ↑                               ↑
// Front                          Back

// You can

// Insert at Front ✅
// Insert at Back ✅
// Delete from Front ✅
// Delete from Back ✅
// 3. Time Complexity
// Operation	Complexity
// push_front()	O(1)
// push_back()	O(1)
// pop_front()	O(1)
// pop_back()	O(1)
// front()	O(1)
// back()	O(1)
// size()	O(1)
// empty()	O(1)
// operator[]	O(1)
// 4. Declaration
// deque<int> dq;

// Example

// deque<int> dq;

// dq.push_back(10);
// dq.push_back(20);
// dq.push_back(30);

// Output

// 10 20 30
// 5. push_back()

// Adds an element at the back.

// deque<int> dq;

// dq.push_back(10);
// dq.push_back(20);
// dq.push_back(30);
// Before

// Empty

// After

// 10 20 30
// 6. push_front()

// Adds an element at the front.

// deque<int> dq;

// dq.push_front(10);
// dq.push_front(20);
// dq.push_front(30);
// 30 20 10
// 7. pop_back()

// Removes the last element.

// deque<int> dq;

// dq.push_back(10);
// dq.push_back(20);
// dq.push_back(30);

// dq.pop_back();

// Output

// 10 20
// 8. pop_front()

// Removes the first element.

// deque<int> dq;

// dq.push_back(10);
// dq.push_back(20);
// dq.push_back(30);

// dq.pop_front();

// Output

// 20 30
// 9. front()

// Returns the first element.

// deque<int> dq;

// dq.push_back(10);
// dq.push_back(20);

// cout << dq.front();

// Output

// 10
// 10. back()

// Returns the last element.

// deque<int> dq;

// dq.push_back(10);
// dq.push_back(20);

// cout << dq.back();

// Output

// 20
// 11. empty()

// Checks whether the deque is empty.

// deque<int> dq;

// if(dq.empty())
// {
//     cout<<"Empty";
// }
// 12. size()

// Returns the number of elements.

// deque<int> dq;

// dq.push_back(10);
// dq.push_back(20);

// cout<<dq.size();

// Output

// 2
// 13. clear()

// Removes all elements.

// dq.clear();

// Before

// 10 20 30

// After

// Empty
// 14. Access using Index
// deque<int> dq;

// dq.push_back(5);
// dq.push_back(10);
// dq.push_back(15);

// cout<<dq[1];

// Output

// 10
// 15. Traversing a Deque

// Using loop

// for(int i=0;i<dq.size();i++)
// {
//     cout<<dq[i]<<" ";
// }

// Output

// 5 10 15

// Using range-based loop

// for(auto x : dq)
// {
//     cout<<x<<" ";

// // gfg
// class Solution
// {
// public:
//     vector<int> firstNegInt(vector<int> &arr, int k)
//     {

//         // code here

//         int n = arr.size();
//         deque<int> dq;

//         vector<int> ans;

//         // for first window
//         for (int i = 0; i < k; i++)
//         {
//             if (arr[i] < 0)
//             {
//                 dq.push_back(i);
//             }
//         }

//         // add element in answer
//         if (!dq.empty())
//         {
//             ans.push_back(arr[dq.front()]);
//         }
//         else
//         {
//             ans.push_back(0);
//         }

//         for (int i = k; i < n; i++)
//         {
//             // remove
//             if (!dq.empty() && dq.front() == i - k)
//             {
//                 dq.pop_front();
//             }

//             // Add

//             if (arr[i] < 0)
//             {
//                 dq.push_back(i);
//             }

//             // add element in answer
//             if (!dq.empty())
//             {
//                 ans.push_back(arr[dq.front()]);
//             }
//             else
//             {
//                 ans.push_back(0);
//             }
//         }
//         return ans;
//     }
// };

// 7. Difference Between Queue and Deque
//             Queue Deque
//                 Insert only at back Insert at both ends
//                     Delete only from front Delete from both ends
//                         Less flexible More flexible
//                             FIFO Double -
//         ended 18. When Should You Use a Deque
//     ?

//     Use a deque when you need
//     :

//     Add elements from the front and back.Remove elements from the front and back.Maintain the order of elements while a window moves.