// Input : 2->4->6->8->10, n=2
// Output :  2->4->6->10

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
// T.C : O(n) S.C : O(1)
Node* RemoveNthNodeFromEnd(Node* head, int n){
    // Step 1 : Create a dummy node and point it to the head
        Node* dummy = new Node(-1);
        dummy->next = head;
    // Step 2 : Create two pointers slow and fast and initially point it to the dummy node
        Node* slow = dummy;
        Node* fast = dummy;
    // Step 3 : Move the fast Pointer to the till n the position
        for(int i=0;i<n;i++){
            fast = fast->next;
        }
        // Edge Case : If the Fast pointer becomes NULL, the Nth node from the end is the head
        if(fast == NULL){
            return head->next;
        }
    // Step 4 : After moving the fast pointer, move the both slow and fast
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
    // Pointer to one step till the fast pointer reaches the end of the Linked List
    // Step 5 : Now the slow pointer will be at the position of the node
    // to be deleted
        Node* newHead = slow->next;
        slow->next = slow->next->next;
        delete newHead;
    // Step 6 : Delete the node
    return dummy->next;
}

int main(){
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(10);

    int n = 2;
    RemoveNthNodeFromEnd(head, n);

    return 0;
}