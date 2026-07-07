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
    Node *sortedMerge(Node *head1, Node *head2)
    {

        Node *first, *last;

        if (head1 == NULL)
            return head2;

        if (head2 == NULL)
            return head1;

        // Select first node
        if (head1->data < head2->data)
        {
            first = last = head1;
            head1 = head1->next;
        }
        else
        {
            first = last = head2;
            head2 = head2->next;
        }

        // Merge
        while (head1 && head2)
        {

            if (head1->data < head2->data)
            {
                last->next = head1;
                last = head1;
                head1 = head1->next;
            }
            else
            {
                last->next = head2;
                last = head2;
                head2 = head2->next;
            }
        }

        // Attach remaining nodes
        if (head1)
            last->next = head1;

        if (head2)
            last->next = head2;

        return first;
    }
};

// Insert at end
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

// Print linked list
void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main()
{

    Node *head1 = NULL;
    Node *head2 = NULL;

    // List1: 1->3->5
    insert(head1, 1);
    insert(head1, 3);
    insert(head1, 5);

    // List2: 2->4->6
    insert(head2, 2);
    insert(head2, 4);
    insert(head2, 6);

    cout << "List 1: ";
    print(head1);

    cout << "List 2: ";
    print(head2);

    Solution obj;

    Node *merged = obj.sortedMerge(head1, head2);

    cout << "Merged List: ";
    print(merged);

    return 0;
}