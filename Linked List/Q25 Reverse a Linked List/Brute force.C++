// Input : 1->2->3->4->5->NULL
// Output :  5->4->3->2->1->NULL

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

// T.C : O(n) S.C : O(1)

Node* ReverseALinkedList(Node* head){
    Node* temp = NULL;
    while(head != NULL){
        Node* curr = head->next;
        head->next = temp;
        temp = head;
        head = curr;
    }
    return temp;
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    ReverseALinkedList(head);
    return 0;
}