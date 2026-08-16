#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    bool detectLoop(Node *head)
    {

        Node *slow = head;
        Node *fast = head;

        while (fast && fast->next)
        {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};

// Insert node at end
void insert(Node *&head, int x)
{

    Node *newNode = new Node(x);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

// Print linked list safely
void print(Node *head)
{

    int count = 0;

    while (head && count < 10)
    {
        cout << head->data << " -> ";
        head = head->next;
        count++;
    }

    cout << "...\n";
}

int main()
{

    Node *head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    // Creating loop:
    // 50 points to node with value 30

    Node *temp = head;
    Node *loopNode = NULL;

    while (temp->next)
    {

        if (temp->data == 30)
            loopNode = temp;

        temp = temp->next;
    }

    temp->next = loopNode;

    Solution obj;

    if (obj.detectLoop(head))
        cout << "Loop Detected\n";
    else
        cout << "No Loop\n";

    return 0;
}

// // leetcode 141. Linked List Cycle
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode * slow, *fast;
//         slow = fast=head;
//         while(fast&&fast->next){
//             slow=slow->next;
//             fast=fast->next->next;

//             if(slow==fast)
//             return true;

//         }
//         return false;
//     }
// };