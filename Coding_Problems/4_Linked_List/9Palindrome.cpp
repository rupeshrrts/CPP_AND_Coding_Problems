// /*
// class Node {
//   public:
//     int data;
//     Node *next;

//     Node(int x) {
//        data = x;
//        next = nullptr;
//     }
// };*/

// class Solution {

//     private:
//     bool checkPalindrome(vector<int> vr){
//         int n = vr.size();
//         int s=0;
//         int e=n-1;
//         while(s<=e){
//             if(vr[s]!=vr[e]){
//                 return false;
//             }
//             s++;
//             e--;

//         }
//         return true;
//     }

//   public:
//     bool isPalindrome(Node *head) {
//         vector<int> arr;
//         Node *temp=head;
//         while(temp!=NULL){
//             arr.push_back(temp->data);
//             temp=temp->next;
//         }
//         return checkPalindrome(arr);

//         //  code here

//     }
// };
