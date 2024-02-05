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

// T.C : O(2n) S.C : O(1)

Node *IntersectionOfTwoLinkedLists(Node *head1, Node *head2)
{
    // Step-1 : Create a dummy node and point it to
    // the head1, head2 and move simultaneously
    Node *dummy1 = head1;
    Node *dummy2 = head2;

    while (dummy1 != dummy2)
    {
        dummy1 = dummy1 == NULL ? head2 : dummy1->next;
        dummy2 = dummy2 == NULL ? head1 : dummy2->next;
    }
    return dummy1;
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