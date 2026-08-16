#include <iostream>
using namespace std;

// Structure of linked list Node
class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class Solution
{

public:
    int getKthFromLast(Node *head, int k)
    {

        Node *first = head;
        Node *second = head;

        // Move first pointer k steps ahead
        while (k--)
        {

            // If k is greater than length
            if (first == NULL)
            {
                return -1;
            }

            first = first->next;
        }

        // Move both pointers together
        while (first)
        {

            first = first->next;
            second = second->next;
        }

        return second->data;
    }
};

// Function to print linked list
void printList(Node *head)
{

    while (head != NULL)
    {

        cout << head->data;

        if (head->next != NULL)
        {
            cout << " -> ";
        }

        head = head->next;
    }

    cout << endl;
}

int main()
{

    // Create linked list
    // 10 -> 20 -> 30 -> 40 -> 50

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    int k = 2;
    cout << "Linked List:\n";
    printList(head);
    Solution obj;
    int ans = obj.getKthFromLast(head, k);
    cout << "\n"
         << k << "th node from end = " << ans << endl;
    return 0;
}

// note submited
// // leetcode 19. Remove Nth Node From End of List

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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count =0;
//         ListNode * temp=head;

//         while(temp!=nullptr){
//             count++;
//             temp=temp->next;
//         }

//         int dist=count-n-1;
//         ListNode *ptr=head;

//         if (dist < 0) {
//             return head->next;
//         }
//        while(dist--){
//         ptr=ptr->next;
//        }
//        // Delete nth node from the end
//         ListNode* del = ptr->next;
//         ptr->next=ptr->next->next;

//         delete del;
//         return head;
//     }
// };