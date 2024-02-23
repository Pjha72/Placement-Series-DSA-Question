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
// T.C : O(N) + O(N) = O(N)  S.C : O(N)
bool CheckPalindrome(Node* head){
    // Step-1 : Create a vector to store the data of the
    // Linked list
    vector<int> v;
    Node* curr = head;
    while(curr != NULL){
        v.push_back(curr->data);
        curr = curr->next;
    }
    // Step-2 : Check if the vector is palindrome or not
    int i=0, j=v.size()-1;
    while(i<j){
        if(v[i] != v[j]){
            return false;
        }
        i++,j--;
    }
    return true;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    CheckPalindrome(head);
}