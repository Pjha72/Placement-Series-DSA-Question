// Input : 1->2->3->4->5->NULL
// Output :  3

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

// T.C : O(n)+O(n/2) S.C : O(1)

Node* FindMiddleOfLinkedList(Node* head){
    // Step - 1 : Find the length of the linked list
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    // Step - 2 : Then divide the length by 2
    int mid = len/2;
    // Step - 3 : Traverse the linked list till mid
    int  i = 0;
    temp = head;
    for(int i=0;i < mid; i++){
        temp = temp->next;
    }
    return temp;
}


int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    FindMiddleOfLinkedList(head);
    return 0;
}