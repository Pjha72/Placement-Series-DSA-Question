// Input : 1->2->3  4->5->6
// Output : 5->7->9

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

// T.C : O(max(N,M)) S.C : O(N)

Node* AddTwoNumber(Node* l1, Node* l2){
    // Step 1 : Create a dummy Node
    Node* dummy = new Node(0);
    // Step 2 : Create a pointer to dummy Node
    Node* temp = dummy;
    // Step 3 : Create a sum and carry variable
    int  carry = 0;
    // Step 4 : Traverse on both the Linked List when both the linked list 
    // are not NULL
    while(l1 != NULL || l2 != NULL || carry){
        // Step 5 : Add the data of both the linked list and 
        // carry and store it in sum
        int sum = 0;
        if(l1 != NULL){
            sum+=l1->data;
            // Step 9 : Move the pointer of both the linked list to the next 
            // of the linked list
            l1 = l1->next;
        }
        if(l2 != NULL){
            sum+=l2->data;
            // Step 9 : Move the pointer of both the linked list to the next 
            // of the linked list
            l2 = l2->next;
        }
        sum+=carry;
        // Step 6 : Create a new Node with sum%10 and store it
        // in the next of the dummy node
        temp->next = new Node(sum%10);
        // Step 7 : Update the carry with sum/10
        carry = sum/10;
        // Step 8 : Move the pointer to the next pf the dummy node
        temp = temp->next;
    }
    return dummy->next;
}

int main(){
    Node* l1 = new Node(1);
    l1->next = new Node(2);
    l1->next->next = new Node(3);

    Node* l2 = new Node(4);
    l2->next = new Node(5);
    l2->next->next = new Node(6);

    AddTwoNumber(l1, l2);

}