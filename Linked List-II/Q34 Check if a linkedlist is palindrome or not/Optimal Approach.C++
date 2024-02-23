#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
// T.C : O(N/2) + O(N/2) + O(N/2)  S.C : O(1)
Node* reverse(Node* head){
    Node* pre = NULL;
    Node* next = NULL;
    while(head != NULL){
        next = head->next;
        head->next = pre;
        pre = head;
        head = next;
    }
    return pre;
}
bool CheckPalindrome(Node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    // Step-1 : Find the middle of the Linked List
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    // Step-2 : Reverse the second half of the linked list
    slow->next = reverse(slow->next);

    // Step-3 : Move the slow to one next step
    slow = slow->next;

    // Step-4 : Compare the first half and second half of 
    // The linke list
    Node* curr = head;
    while(slow != NULL){
        if(curr->data != slow->data){
            return false;
        }
        curr = curr->next;
        slow = slow->next;
    }
    return true;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    CheckPalindrome(head);
}