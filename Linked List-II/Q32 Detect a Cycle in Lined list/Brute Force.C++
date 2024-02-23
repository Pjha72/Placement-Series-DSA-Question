#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

// T.C : O(n) S.C : O(n)

bool DetectedCycle(Node* head){
    // Step -1 : Create a hash table for store the complete node
    unordered_set<Node*> s;
    // Step-2 : Create a dummy node and point it to head
    Node* dummy = head;
    // Step-3 : Traverse the linked list and check if the node is 
    // already present in the hash table or not
    while(dummy != NULL){
        // If the node is already present in the hash table
        // then return true or cycle is detected
        if(s.find(dummy) != s.end()){
            return true;
        }

        // If the node is not present in the hash table
        // then insert the node into the hash table
        s.insert(dummy);
        // Move the dummy to the next node
        dummy = dummy->next;
    }
    // if the cycle is not detected then return false
    return false;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(7);
    head->next->next->next->next->next = new Node(5);

    DetectedCycle(head);
}