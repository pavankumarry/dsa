#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class node {
public:
    int data;
    node* next;

public:
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }

public:
    node(int data2) {
        data = data2;
        next = nullptr;
    }
};

node* arraytolinkedlist(std::vector<int>& arr) {
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
//here we pass head from the main function
node* removehead(node* head){
    if(head==NULL) return head;
    node* temp=head;
    head=temp->next;
    free(temp);
    return head;


}

int main() {
    vector<int> arr = {12, 13, 1, 15};
    node* head = arraytolinkedlist(arr);
    // cout<<head->data;
    head=removehead(head);
    // cout<<head->data;

   // Print the values of the linked list
    node* temp = head;
    while (temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
