#include <iostream>
using namespace std;

// Node class for Linked List
class Node
{
public:
    int data;   // Stores node value
    Node *next; // Pointer to next node

    // Constructor
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

// 206. Reverse Linked List
class Solution
{
public:
    // Function to reverse linked list
    Node *reverseList(Node *head)
    {

        // Prev initially points to NULL
        Node *Prev = NULL;
        // Curr starts from head
        Node *Curr = head;
        // Temporary pointer to store next node
        Node *next = NULL;

        // Traverse until Curr becomes NULL
        while (Curr)
        {
            // Store next node before changing links
            next = Curr->next;
            // Reverse current node pointer
            Curr->next = Prev;
            // Move Prev one step ahead
            Prev = Curr;
            // Move Curr one step ahead
            Curr = next;
        }

        // Prev becomes new head after reversal
        return Prev;
    }
};

// Function to print linked list
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
    // Creating linked list:
    // 10 -> 20 -> 30 -> 40 -> NULL
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Print original list
    cout << "Original List: ";
    printList(head);

    // Create object
    Solution obj;

    // Reverse linked list
    head = obj.reverseList(head);

    // Print reversed list
    cout << "Reversed List: ";
    printList(head);

    return 0;
}