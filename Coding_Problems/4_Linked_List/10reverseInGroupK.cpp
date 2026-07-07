#include <iostream>
using namespace std;

// Node class
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

// Solution class
class Solution
{

public:
    Node *reverseKGroup(Node *head, int k)
    {

        // Base condition
        if (head == NULL)
        {
            return NULL;
        }

        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        int count = 0;

        // Reverse first k nodes
        while (curr != NULL && count < k)
        {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            // count
            count++;
        }

        // Recursive call for remaining nodes
        if (next != NULL)
        {
            head->next = reverseKGroup(next, k);
        }

        // New head after reversal
        return prev;
    }
};

// Function to print linked list
void printList(Node *head)
{

    while (head != NULL)
    {

        cout << head->data;

        if (head->next != NULL)
        {
            cout << " -> ";
        }

        head = head->next;
    }

    cout << endl;
}

int main()
{

    // Create linked list
    // 1 -> 2 -> 3 -> 4 -> 5 -> 6

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    int k = 2;

    cout << "Original Linked List:\n";
    printList(head);

    Solution obj;

    head = obj.reverseKGroup(head, k);

    cout << "\nReversed in Group of " << k << ":\n";
    printList(head);

    return 0;
}