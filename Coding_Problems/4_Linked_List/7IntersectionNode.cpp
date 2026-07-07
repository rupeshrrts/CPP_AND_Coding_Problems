// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution
// {
// public:
//     Node *intersectPoint(Node *head1, Node *head2)
//     {

//         int c1 = 0, c2 = 0;

//         Node *first = head1;
//         Node *second = head2;

//         // Count first list length
//         while (first)
//         {
//             c1++;
//             first = first->next;
//         }

//         // Count second list length
//         while (second)
//         {
//             c2++;
//             second = second->next;
//         }

//         int c3;

//         // Find difference
//         if (c1 > c2)
//             c3 = c1 - c2;
//         else
//             c3 = c2 - c1;

//         // Move longer list ahead
//         while (c3--)
//         {
//             if (c1 > c2)
//                 head1 = head1->next;
//             else
//                 head2 = head2->next;
//         }

//         // Traverse together
//         while (head1 && head2)
//         {

//             if (head1 == head2)
//                 return head1;

//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         return NULL;
//     }
// };

// void printList(Node *head)
// {
//     while (head)
//     {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// int main()
// {

//     // Common part (intersection)
//     Node *common = new Node(30);
//     common->next = new Node(40);
//     common->next->next = new Node(50);

//     // First list
//     Node *head1 = new Node(10);
//     head1->next = new Node(20);
//     head1->next->next = common;

//     // Second list
//     Node *head2 = new Node(15);
//     head2->next = common;

//     cout << "List 1: ";
//     printList(head1);

//     cout << "List 2: ";
//     printList(head2);

//     Solution obj;

//     Node *ans = obj.intersectPoint(head1, head2);

//     if (ans)
//         cout << "\nIntersection at node: "
//              << ans->data << endl;
//     else
//         cout << "\nNo intersection\n";
//     return 0;
// }

#include <iostream>
#include <unordered_set>
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
    Node *intersectPoint(Node *head1, Node *head2)
    {

        unordered_set<Node *> st;

        // Store all nodes of first list
        while (head1)
        {
            st.insert(head1);
            head1 = head1->next;
        }

        // Check second list
        while (head2)
        {

            if (st.find(head2) != st.end())
            {
                return head2;
            }

            head2 = head2->next;
        }

        return NULL;
    }
};

int main()
{

    Node *common = new Node(30);
    common->next = new Node(40);
    common->next->next = new Node(50);

    Node *head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = common;

    Node *head2 = new Node(15);
    head2->next = common;

    Solution obj;

    Node *ans = obj.intersectPoint(head1, head2);

    if (ans)
        cout << "Intersection node: " << ans->data;
}