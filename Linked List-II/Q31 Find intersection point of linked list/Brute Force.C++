// Input : l1 : 1->2->3->8->7->6 and l2 : 2->8->1->3->8->7->6
// Output : 8

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

// T.C : O(m*n) S.C : O(1)

Node* IntersectionOfTwoLinkedLists(Node* head1, Node* head2){
    Node* curr1 = head1;
    Node* curr2 = head2;
    while(curr1 != curr2){
        curr1 = curr1 == NULL ? head1 : curr1->next;
        curr2 = curr2 == NULL ? head2 : curr2->next;
    }
    return curr1;
}

int main(){
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(8);
    head1->next->next->next->next = new Node(7);
    head1->next->next->next->next->next = new Node(6);

    Node* head2 = new Node(2);
    head2->next = new Node(8);
    head2->next->next = new Node(1);
    head2->next->next->next = new Node(3);
    head1->next->next->next->next = new Node(8);
    head1->next->next->next->next->next = new Node(7);
    head1->next->next->next->next->next->next = new Node(6);

    IntersectionOfTwoLinkedLists(head1, head2);
}