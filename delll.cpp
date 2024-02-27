#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    public:

    node(int data1,node* next1)
    {
        
        data=data1;
        next=next1;
    }
    public:

    node(int data2)
    {
        
        data=data2;
        next=nullptr;
    }
};
node* toll(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;
}

int main(){
    vector<int> arr={5,6,7,8,9};
    node* head=toll(arr);
    cout<<head->data<<" "<<head->next<<endl;
    

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;

}