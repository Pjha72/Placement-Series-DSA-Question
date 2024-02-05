// Input : l1 : 1->2->3->8->7->6 and l2 : 2->8->1->3->8->7->6
// Output : 8

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// T.C : O(n) + O(m-n) + O(n) S.C : O(1)

Node *IntersectionOfTwoLinkedLists(Node *head1, Node *head2)
{
    // Step-1 : Create a dummy node and point it to the head1, head2
    Node* dummy1 = head1;
    Node* dummy2 = head2;

    // Step-2 : Traverse on the l1 and l2 and find the length of the linked list
    int len1 = 0, len2 = 0;
    while(dummy1 != NULL){
        len1++;
        dummy1 = dummy1->next;
    }
    while(dummy2 != NULL){
        len2++;
        dummy2 = dummy2->next;
    }

    // Step-3 : Find the Difference of the length of the linked list
    int diff = abs(len1-len2);
    dummy1 = head1;
    dummy2 = head2;
    // Step-4 : Move the pointer of the longer linked list 
    // by the difference of the length of the linked list
    int i = 0;
    while(i<diff){
        if(len1>len2){
            dummy1 = dummy1->next;
        }
        else{
            dummy2 = dummy2->next;
        }
        i++;
    }

    // Step-5 : Move the bothe pointer simultaneously and check if
    // the address of the pointer is same or not
    while(dummy1 != NULL && dummy2 != NULL){
        if(dummy1 == dummy2){
            return dummy1;
        }
        dummy1 = dummy1->next;
        dummy2 = dummy2->next;
    }
    return NULL;
}

int main()
{
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(8);
    head1->next->next->next->next = new Node(7);
    head1->next->next->next->next->next = new Node(6);

    Node *head2 = new Node(2);
    head2->next = new Node(8);
    head2->next->next = new Node(1);
    head2->next->next->next = new Node(3);
    head1->next->next->next->next = new Node(8);
    head1->next->next->next->next->next = new Node(7);
    head1->next->next->next->next->next->next = new Node(6);

    IntersectionOfTwoLinkedLists(head1, head2);
}