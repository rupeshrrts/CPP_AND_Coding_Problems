#include <iostream>
using namespace std;

/* Definition for Linked List */
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

/*
Definition for Linked List
struct Node {
    int data;
    struct Node* next;
};
*/
int getCount(struct Node *head)
{
    // code here
    struct Node *Ptr = head;
    int c = 0;
    while (Ptr != NULL)
    {
        c++;
        Ptr = Ptr->next;
    }
    return c;
}

int main()
{

    // Creating linked list: 10 -> 20 -> 30 -> 40
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int totalNodes = getCount(head);
    cout << "Number of nodes: " << totalNodes << endl;

    return 0;
}