// // leetcode 142. Linked List Cycle II

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution
// {
// public:
//     ListNode *detectCycle(ListNode *head)
//     {

//         if (head == NULL || head->next == NULL)
//         {
//             return NULL;
//         }
//         ListNode *slow = head;
//         ListNode *fast = head;

//         while (fast && fast->next)
//         {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast)
//             {
//                 break;
//             }
//         }
//         // No cycle
//         if (slow != fast)
//         {
//             return NULL;
//         }

//         slow = head;
//         if (slow == fast)
//         {
//             while (fast->next != slow)
//             {
//                 fast = fast->next;
//             }
//         }
//         else
//         {
//             while (slow->next != fast->next)
//             {
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//         }

//         return fast->next;
//     }
// };