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

// link list
//  /**
//   * Definition for singly-linked list.
//   * struct ListNode {
//   *     int val;
//   *     ListNode *next;
//   *     ListNode() : val(0), next(nullptr) {}
//   *     ListNode(int x) : val(x), next(nullptr) {}
//   *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//   * };
//   */
//  class Solution {
//  public:
//      ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//          ListNode *first , *last;
//          if(list1==NULL) return list2;
//          if(list2==NULL) return list1;

//         if(list1->val<=list2->val){
//             first=last=list1;
//             list1 = list1->next;
//         }
//         else{
//             first=last=list2;
//             list2 = list2->next;
//         }
//         while(list1&&list2)
//         {
//         if((list1->val)<= (list2->val)){

//             last->next=list1;
//             last=list1;
//             list1=list1->next;
//         }
//         else{
//             last->next=list2;
//             last=list2;
//             list2=list2->next;
//         }

//         }
//         if(list1)
//             last->next = list1;

//         if(list2)
//             last->next = list2;

//         return first;

//     }
// };