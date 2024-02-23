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

// T.C : O(n) S.C : O(1)

bool DetectedCycle(Node* head){
    if(head==NULL || head->next==NULL){
        return false;
    }
    // Step-1 : Create two dummy pointer slow and fast
    Node* slow = head;
    Node* fast = head;
    // Stpe-2 : Move the slow to one step and fast to two step
    // If the slow and fast pointer meet at any point then
    // the cycle is detected
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    // If the cycle is not detected then return false
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