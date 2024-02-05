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

// T.C : O(m*n) S.C : O(1)

Node *IntersectionOfTwoLinkedLists(Node *head1, Node *head2)
{
    // Step - 1 : Take a hashmap and store the address of the l1 and l2
    unordered_map<Node*, int>m;
    Node* curr1 = head1;
    while(curr1 != NULL){
        m[curr1] = 1;
        curr1 = curr1->next;
    }
    // Step-2 : Traverse on the l2 and check if the address is persent in the hashmap or not
    Node* curr2 = head2;
    while(curr2 != NULL){
        if(m.find(curr2) != m.end()){
            return curr2;
        }
        curr2 = curr2->next;
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