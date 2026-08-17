// 1.  707  Design Linked List
//         ↓
// 2.  203  Remove Linked List Elements
//         ↓
// 3.  876  Middle of the Linked List
//         ↓
// 4.  206  Reverse Linked List
//         ↓
// 5.  141  Linked List Cycle
//         ↓
// 6.  160  Intersection of Two Linked Lists
//         ↓
// 7.  19   Remove Nth Node From End
//         ↓
// 8.  234  Palindrome Linked List
//         ↓
// 9.  21   Merge Two Sorted Lists
//         ↓
// 10. 83   Remove Duplicates
//         ↓
// 11. 82   Remove Duplicates II
//         ↓
// 12. 92   Reverse Linked List II
//         ↓
// 13. 142  Linked List Cycle II
//         ↓
// 14. 2    Add Two Numbers
//         ↓
// 15. 24   Swap Nodes in Pairs
//         ↓
// 16. 328  Odd Even Linked List
//         ↓
// 17. 61   Rotate List
//         ↓
// 18. 138  Copy List with Random Pointer
//         ↓
// 19. 148  Sort List
//         ↓
// 20. 25   Reverse Nodes in k-Group

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