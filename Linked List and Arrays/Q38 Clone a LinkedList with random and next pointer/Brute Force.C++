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

Node* CloneALLWithRandomAndNextPointer(Node* head){
    // Step-1 : Create a Hashmap to store the 
    // address of original node and its clone node
    unordered_map<Node*, Node*> mp;
    Node* temp = head;
    // Step-2 : Traverse the original list and create a 
    // copy of each node and store it in the hashmap
    while(temp != NULL){
        Node* newNode = new Node(temp->data);
        mp[temp] = newNode;
        temp = temp->next;
    }
    Node* curr = head;
    // Step-3 : Traverse on the original list and set the next and random pointer
    // of the clone list
    while(curr!=NULL){
        Node* node = mp[curr];
        node->next = (curr->next != NULL) ? mp[curr->next] : NULL;
        node->random = (curr->random != NULL) ? mp[curr->random] : NULL;
        curr = curr->next;
    }
    // Step-4 : Return the head of the clone list
    return mp[head];
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