#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* bottom;
    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

Node* mergeTwoList(Node *a, Node *b){
    // Step-1 : To create a dummy node
    Node* temp = new Node(0);
    Node* res = temp;

    // Step-2 : Merge the two list
    while(a != NULL && b != NULL){
        if(a->data < b->data){
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else{
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }

    // Step-3 : If any of the list is left
    if(a) temp->bottom = a;
    else temp->bottom = b;
    return res->bottom;
}

Node* flatten(Node* root){
    if(root==NULL || root->next==NULL){
        return root;
    }
    // recur for list on right
    root->next = flatten(root->next); 

    // now merge
    root = mergeTwoList(root, root->next);

    // return the root
    // it will be in turn merged witn its list
    return root;
}