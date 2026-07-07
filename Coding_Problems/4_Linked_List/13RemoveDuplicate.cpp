#include <iostream>
#include <unordered_set>
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
    Node *removeDuplicates(Node *head)
    {

        if (head == NULL)
            return head;

        unordered_set<int> st;

        Node *curr = head;
        Node *prev = NULL;

        while (curr)
        {

            if (st.find(curr->data) != st.end())
            {
                prev->next = curr->next;
            }
            else
            {
                st.insert(curr->data);
                prev = curr;
            }

            curr = curr->next;
        }

        return head;
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

    // Create:
    // 1 -> 2 -> 3 -> 2 -> 4 -> 1 -> 5

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(1);
    head->next->next->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}