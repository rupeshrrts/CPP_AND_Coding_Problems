// class Solution {
// public:

//     Node* reverseNu(Node* head) {
//         Node* prev = nullptr;
//         Node* next = nullptr;
//         Node* curr = head;

//         while (curr) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }

//         return prev;
//     }

//     Node* addOne(Node* head) {

//         head = reverseNu(head);

//         Node* curr = head;

//         while (curr) {

//             // Last node is 9
//             if (curr->data == 9 && curr->next == nullptr) {
//                 curr->data = 0;
//                 Node* temp = new Node(1);
//                 curr->next = temp;
//                 break;
//             }

//             // Current node is 9
//             else if (curr->data == 9) {

//                 curr->data = 0;
//                 curr = curr->next;
//             }

//             // Current node is less than 9
//             else {

//                 curr->data = curr->data + 1;
//                 break;
//             }
//         }

//         head = reverseNu(head);

//         return head;
//     }
// };