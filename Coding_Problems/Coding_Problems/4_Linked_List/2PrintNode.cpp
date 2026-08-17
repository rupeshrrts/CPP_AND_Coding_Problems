#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution
{
public:
    vector<int> printList(Node *head)
    {
        Node *Ptr = head;
        vector<int> res;
        while (Ptr != NULL)
        {
            res.push_back(Ptr->data);
            Ptr = Ptr->next;
        }
        return res;
    }
};

int main()
{

    // Create linked list:
    // 10 -> 20 -> 30 -> 40
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Solution obj;
    vector<int> ans = obj.printList(head);
    cout << "Linked List elements: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}