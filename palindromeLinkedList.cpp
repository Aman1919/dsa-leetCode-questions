#include<iostream>
#include<class>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

https://leetcode.com/problems/palindrome-linked-list/submissions/916147351/
Plaindrome Linked List - In this question we have check if the given linked list is palindrome
or not . we can do this question first by getting the middle node of linked list and a reverse list till the middle node
then check till the if they nodes val is equal or not .
 */

class Solution {
public:
    bool isPalindrome(ListNode* head) {
    ListNode* mid=middle(head);
    ListNode* reverse=reverseList(mid);
    while(head!=NULL&&reverse!=NULL){
        if(head->val!=reverse->val){
            return false;
        }
        head=head->next;
        reverse=reverse->next;
    }
    return true;

    }



ListNode* reverseList(ListNode* head){
ListNode* prev=NULL;
ListNode* curr=head;
ListNode* next;
while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;
}
    ListNode* middle(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
