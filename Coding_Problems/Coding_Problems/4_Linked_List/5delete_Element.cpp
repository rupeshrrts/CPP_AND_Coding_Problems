// // leetcode 203. Remove Linked List Elements

// class Solution
// {
// public:
//     ListNode *removeElements(ListNode *head, int val)
//     {

//         // Remove matching nodes from the beginning
//         while (head != nullptr && head->val == val)
//         {
//             head = head->next;
//         }

//         if (head == nullptr)
//         {
//             return nullptr;
//         }

//         ListNode *temp = head;

//         while (temp->next != nullptr)
//         {

//             if (temp->next->val == val)
//             {
//                 // Remove next node
//                 temp->next = temp->next->next;
//             }
//             else
//             {
//                 // Move forward
//                 temp = temp->next;
//             }
//         }

//         return head;
//     }
// };