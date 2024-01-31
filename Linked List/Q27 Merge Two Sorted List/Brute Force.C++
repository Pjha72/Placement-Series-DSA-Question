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

Node* MergeTwoSortedList(Node* list1, Node* list2){
        vector<int> v;
        while(list1 != NULL){
            v.push_back(list1->data);
            list1 = list1->next;
        }
        while(list2 != NULL){
            v.push_back(list2->data);
            list2 = list2->next;
        }
        sort(v.begin(),v.end());
        // Step-1 : Create a dummy Node
        Node* dummy = new Node(-1);

        // Step-2 : Create a pointer to dummy Node
        Node* temp = dummy;
        
        for(int i=0;i<v.size();i++){
            temp->next = new Node(v[i]);
            temp = temp->next;
        }
        return dummy->next;
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