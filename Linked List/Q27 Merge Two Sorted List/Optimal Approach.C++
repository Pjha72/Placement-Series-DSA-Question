// Input : 1->2->4, 1->3->4
// Output : 1->1->2->3->4->4

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
// Inplace Approach
// T.C : O(N1+N2) S.C : O(1)

Node* MergeTwoSortedList(Node* list1, Node* list2){
    // Iterative
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;
    if(list1->data > list2->data) swap(list1,list2);

    Node* res = list1;
    while(list1 != NULL && list2 != NULL){
        Node* temp = NULL;
        while(list1 != NULL && list1->data <= list2->data){
            temp = list1;
            list1 = list1->next;
        }
        // when list1->data >= list2->data
        temp->next = list2;
        swap(list1,list2);
    }
    return res;
}

int main(){
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(4);

    Node* head2 = new Node(1);
    head2->next = new Node(3);
    head2->next->next = new Node(4);

    MergeTwoSortedList(head1, head2);
    return 0;
}