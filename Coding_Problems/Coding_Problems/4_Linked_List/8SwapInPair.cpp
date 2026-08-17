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

// Note submitted;

// //// leetcode 24. Swap Nodes in Pairs
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {

//         ListNode* ptr=head;
//         while(ptr&&ptr->next){
//             swap(ptr->val,ptr->next->val);
//             ptr=ptr->next->next;
//         }

//         return head;

//     }
// };

// ///forleetcode 24. Swap Nodes in Pairs

// class Solution {
// public:

//     ListNode* swaps(ListNode* first, ListNode* second) {
//         first->next = second->next;
//         second->next = first;
//         return second;
//     }

//     ListNode* swapPairs(ListNode* head) {
//         if (head == nullptr || head->next == nullptr)
//             return head;
//         ListNode* ptr = head;

//         // First pair
//         ListNode* first = ptr;
//         ListNode* second = ptr->next;
//         head = swaps(first, second);
//         // ptr becomes the first node of the swapped pair
//         ptr = first;

//         while (ptr->next && ptr->next->next) {
//             first = ptr->next;
//             second = first->next;
//             ptr->next = swaps(first, second);
//             ptr = first;
//         }
//         return head;
//     }
// };

// //

// class Solution {
// public:

//     ListNode* swapPairs(ListNode* head) {

//         if (head == nullptr || head->next == nullptr)
//             return head;

//         ListNode* ptr = head;

//         // First pair
//         ListNode* first = ptr;
//         ListNode* second = ptr->next;

//         first->next = second->next;
//         second->next = first;

//         // New head after swapping first pair
//         head = second;

//         // ptr becomes first node of swapped pair
//         ptr = first;

//         while (ptr->next && ptr->next->next) {

//             first = ptr->next;
//             second = first->next;

//             // Relink nodes
//             first->next = second->next;
//             second->next = first;
//             ptr->next = second;

//             // Move to next pair
//             ptr = first;
//         }

//         return head;
//     }
// };