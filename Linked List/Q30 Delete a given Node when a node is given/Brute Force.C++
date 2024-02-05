// Input : 4->5->1->9, node = 5;
// Output: 4->1->9

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

// T.C : O(1) S.C : O(1)

void DeleteANode(Node* node){
    node->data = node->next->data;
    node->next = node->next->next;
}

int main(){
    Node* head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(1);
    head->next->next->next = new Node(9);
    DeleteANode(head);
}