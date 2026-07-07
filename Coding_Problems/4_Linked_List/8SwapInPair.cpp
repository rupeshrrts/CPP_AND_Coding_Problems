#include <iostream>
using namespace std;

struct Node
{
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
    Node *pairWiseSwap(Node *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        Node *first = head;
        Node *prev = NULL;

        while (first && first->next)
        {

            Node *sec = first->next;

            // swap nodes
            first->next = sec->next;
            sec->next = first;

            // update head for first swap
            if (prev == NULL)
            {
                head = sec;
            }
            else
            {
                prev->next = sec;
            }

            // move ahead
            prev = first;
            first = first->next;
        }

        return head;
    }
};

// Insert at end
void insert(Node *&head, int x)
{

    Node *temp = new Node(x);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    Node *curr = head;

    while (curr->next)
        curr = curr->next;

    curr->next = temp;
}

// Print linked list
void print(Node *head)
{

    while (head)
    {
        cout << head->data;

        if (head->next)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main()
{

    Node *head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 2);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    insert(head, 8);

    cout << "Original List:\n";
    print(head);

    Solution obj;

    head = obj.pairWiseSwap(head);

    cout << "\nAfter Pairwise Swap:\n";
    print(head);

    return 0;
}