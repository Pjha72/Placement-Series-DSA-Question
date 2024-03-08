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

// T.C : O(n*k) S.C : O(1)
Node* RotateByK(Node* head, int k){
    if(head == NULL || head->next == NULL){
        return head;
    }
    for(int i=0;i<k;i++){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        Node* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end;
    }
    return head;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    RotateByK(head, k);
}