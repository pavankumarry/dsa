#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }

    node(int data2) {
        data = data2;
        next = nullptr;
    }
};

node* ConvertArray(vector<int>& arr) {
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main() {
    vector<int> arr = {12, 16, 11, 10};
    node* head = ConvertArray(arr);
    node* temp=head;
    int cnt=0;
    while(temp){
        cout<<temp->data<<endl;
        cnt+=1;
        temp=temp->next;
    }
    cout<<cnt<<endl;
    cout << head->data;
    return 0;
}
