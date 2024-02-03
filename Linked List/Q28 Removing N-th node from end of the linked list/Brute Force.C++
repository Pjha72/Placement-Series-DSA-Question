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
// T.C : O(n)+O(n) S.C : O(1)
Node* RemoveNthNodeFromEnd(Node* head, int n){
    // Step 1 : Find the Length of the Linked List
    Node* dummy = head;
    int cnt = 0;
    while(dummy != NULL){
        cnt++;
        dummy = dummy->next;
    }

    if(cnt == n){
        Node* newhead = head;
        head = head->next;
        delete newhead;
        return head;
    }
    // Step 2 : Find the position of the node to be deleted
    int pos = cnt - n;
    dummy = head;
    while(dummy != NULL){
        pos--;
        if(pos == 0){
            break;
        }
        dummy = dummy->next;
    }
    // Step 3 : Delete the node
    Node* node = dummy->next;
    dummy->next = node->next;
    delete node; 

    // Step 4 : Print the Linked List
    return head;
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