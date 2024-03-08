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

// T.C : O(n*k) S.C : O(1)
Node *RotateByK(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // Step-1 : Find the length of the linked list
    Node* curr = head;
    int len = 1;
    while(curr->next != NULL){
        curr = curr->next;
        len++;
    }
    // Step-2 : the curr node next will point to head of the linked list
    curr->next = head;
    k = k%len;
    // Step-3 : go till that node
    int end = len-k;
    int i = 0;
    while(i<end){
        curr = curr->next;
        i++;
    }
    head = curr->next;
    curr->next = NULL;
    return head;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    RotateByK(head, k);
}