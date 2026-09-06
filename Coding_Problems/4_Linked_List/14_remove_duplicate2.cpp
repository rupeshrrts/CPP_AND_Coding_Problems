// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {

//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         ListNode* next = nullptr;

//         while (curr != nullptr) {

//             next=curr->next;

//             // Duplicate found
//             if (next != nullptr && curr->val == next->val) {

//                 // Move next until value changes
//                 while (next != nullptr &&
//                        next->val == curr->val) {
//                     next = next->next;
//                 }

//                 // Duplicate group is at the beginning
//                 if (prev == nullptr) {
//                     head = next;
//                 }
//                 else {
//                     prev->next = next;
//                 }

//                 curr = next;
//             }
//             else {

//                 // Current node is unique
//                 prev = curr;
//                 curr = next;
//             }
//         }

//         return head;
//     }
// };