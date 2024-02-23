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

Node* ReverseKGroups(Node* head, int k){
    if(head==NULL || k==1) return head;
    Node* dummy = new Node(0);
    dummy->next = head;

    Node* curr = dummy, *nex = dummy, *pre = dummy;;
    int len = 0;
    while(curr->next != NULL){
        len++;
        curr = curr->next;
    }

    while(len >= k){
        curr = pre->next;
        nex = curr->next;
        for(int i=1;i<k;i++){
            curr->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = curr->next;
        }
        pre = curr;
        len -= k;
    }

    return dummy->next;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);

    ReverseKGroups(head, 3);
}