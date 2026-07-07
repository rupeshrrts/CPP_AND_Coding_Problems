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

class Solution
{
public:
    int getCount(Node *head)
    {
        int count = 0;

        while (head != NULL)
        {
            count++;
            head = head->next;
        }

        return count;
    }
};

int main()
{

    // Creating linked list: 10 -> 20 -> 30 -> 40
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Solution obj;
    int totalNodes = obj.getCount(head);
    cout << "Number of nodes: " << totalNodes << endl;

    return 0;
}