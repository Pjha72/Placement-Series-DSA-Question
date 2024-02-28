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
// T.C : O(n) S.C : O(1)
Node* FindStartingPoint(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    // Step-1:Create a slow and fast pointer
    Node *slow = head; 
    Node *fast = head;
    Node *entry = head;
    // Step-2: Move the slow pointer by one and fast pointer
    // by two
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        // Step-3: If the slow and fast pointer meet then
        // break the loop
        if(slow == fast){  // There is a cycle
           // Step-4: Then move the slow pointer to the head of the
            // linked list and move the slow and fast pointer by one
            // until they meet
            while(slow!=entry){
                slow = slow->next;
                entry = entry->next;
            }
            return slow;
        }
    }
    // Step-5: Return the starting point of the loop
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