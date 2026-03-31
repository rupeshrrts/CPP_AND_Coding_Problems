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

    // for (int i = 0; i < 9; i++) {

    //     if (pq.size() > k)
    //         pq.pop();

    // }
    cout << "Kth greater element: " << pq.top();
}