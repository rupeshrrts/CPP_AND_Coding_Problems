#include <iostream>
using namespace std;

// Node definition
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class Solution
{
public:
    // Function to return middle element
    int getMiddle(Node *head)
    {
        // Slow moves 1 step
        Node *s;

        // Fast moves 2 steps
        Node *f;

        // Both start from head
        s = f = head;

        // Traverse until fast reaches end
        while (f && f->next)
        {
            s = s->next;       // Move slow by 1
            f = f->next->next; // Move fast by 2
        }

        // Slow points to middle node
        return s->data;
    }
};

// for leet code
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//  for Leetcode
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//           ListNode* slow=head;
//         ListNode* fast=head;

//         while(fast&&fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }

//             return slow;

//     }
// };
// Print linked list
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    // Create:
    // 10 -> 20 -> 30 -> 40 -> 50

    Node *head = new Node(10);

    head->next = new Node(20);

    head->next->next = new Node(30);

    head->next->next->next = new Node(40);

    head->next->next->next->next = new Node(50);

    cout << "Linked List: ";
    printList(head);

    Solution obj;

    int middle = obj.getMiddle(head);

    cout << "Middle Element = "
         << middle << endl;

    return 0;
}