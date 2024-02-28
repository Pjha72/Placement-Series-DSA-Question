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
// T.C : O(n) S.C : O(n)
Node* FindStartingPoint(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    // Step - 1: Create a hash table to store the node of the
    // linked list
    unordered_set<Node*>s;
    Node *temp = head;
    while(temp!=NULL){
        // Step - 2: If the node is already present in the
        // Hash table then return the index of the node
        if(s.find(temp) != s.end()){
            return temp;
        }
        // Step - 3: if the node is not present ion the hash
        // table then insert the node into the hash table
        s.insert(temp);
        temp = temp->next;
    }
    // Step - 4: If the loop is not present in the
    // linked list then return -1
    return NULL;
}

int main()
{
    Node *head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);

    FindStartingPoint(head);
}