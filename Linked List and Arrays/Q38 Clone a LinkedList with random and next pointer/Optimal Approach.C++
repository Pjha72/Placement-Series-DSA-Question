#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *random;
    Node(int x)
    {
        data = x;
        next = random = NULL;
    }
};
// T.C : O(N) S.C : O(1)
Node* CloneALLWithRandomAndNextPointer(Node* head){
    // Step-1 : Create a Copy Node Nad insert right after 
    // The original Node
    Node* curr = head;
    Node* front = head;
    while(curr!=NULL){
        front = curr->next;
        Node* newNode = new Node(curr->data);
        curr->next = newNode;
        newNode->next = front;
        curr = front;
    }
    // Step-2 : Set the random pointer of the new Node
    Node* itr = head;
    while(itr!=NULL){
        itr->next->random = (itr->random != NULL) ? itr->random->next : NULL;
        itr = itr->next->next;
    }
    // Step-3 : Separate the original and clone list
    Node* dummy = new Node(0);
    itr = head;
    curr = dummy;
    Node* fast;
    while(itr != NULL){
        fast = itr->next->next;
        curr->next = itr->next;
        itr->next = fast;
        curr = curr->next;
        itr=fast;
    }
    // Step-4 : Return the head of the clone list
    return dummy->next;

}

int main()
{
    Node* head = NULL;

    Node *node1 = new Node(7);
    Node *node2 = new Node(11);
    Node *node3 = new Node(13);
    Node *node4 = new Node(10);
    Node *node5 = new Node(1);

    head = node1;
    head->next =  node2;
    head->next->next = node3;
    head->next->next->next = node4;
    head->next->next->next->next =node5;

    head->random =  node4;
    head->next->random = node1;
    head->next->next->random = NULL;
    head->next->next->next->random =node2;

    CloneALLWithRandomAndNextPointer(head);
}