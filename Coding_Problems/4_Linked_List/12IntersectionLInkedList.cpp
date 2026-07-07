#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
public:
    Node *findIntersection(Node *head1, Node *head2)
    {
        Node *dummy = new Node(-1);
        Node *temp = dummy;

        while (head1 && head2)
        {
            if (head1->data < head2->data)
            {
                head1 = head1->next;
            }
            else if (head1->data > head2->data)
            {
                head2 = head2->next;
            }
            else
            {
                temp->next = new Node(head1->data);
                temp = temp->next;

                head1 = head1->next;
                head2 = head2->next;
            }
        }

        return dummy->next;
    }
};

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // List 1: 1 -> 2 -> 3 -> 4 -> 6
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = new Node(6);

    // List 2: 2 -> 4 -> 6 -> 8
    Node *head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);
    head2->next->next->next = new Node(8);

    Solution obj;

    Node *result = obj.findIntersection(head1, head2);

    cout << "Intersection List: ";
    printList(result);

    return 0;
}