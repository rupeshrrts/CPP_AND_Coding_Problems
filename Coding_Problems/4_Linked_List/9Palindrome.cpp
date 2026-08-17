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

//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// 234. Palindrome Linked List

// brute force approach
// class Solution
// {
// public:
//     bool isPalindrome(ListNode *head)
//     {
//         //  code here
//         vector<int> arr;
//         ListNode *ptr = head;
//         while (ptr != NULL)
//         {
//             arr.push_back(ptr->val);
//             ptr = ptr->next;
//         }
//         int n = arr.size();
//         int start = 0;
//         int end = n - 1;
//         while (start <= end)
//         {
//             if (arr[start] != arr[end])
//             {
//                 return false;
//             }
//             start++;
//             end--;
//         }
//         return true;
//     }
// };

// best approach
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* ptr = head;
//         ListNode* slow = head;
//         ListNode* fast = head;
//         if(head==nullptr|| head->next==nullptr)
//         {
//             return true;
//         }
//         while(fast&&fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode* prev = nullptr;
//         ListNode* curr = slow;
//         ListNode* next = nullptr;
//         while(curr){
//             next = curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         ListNode* temp=head;
//         while(temp&&prev){
//             if(temp->val!=prev->val){
//                 return false;
//             }

//             temp=temp->next;
//             prev=prev->next;
//         }
//         return true;
//     }
// };