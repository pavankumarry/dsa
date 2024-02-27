#include<bits/stdc++.h>
using namespace std;
struct node
//we can use class inplace of struct
{
    public:
    int data;
    node* next;
//here we are creating constructors for the class node
//which is a self defined constructer
    public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    //here this is used to not to initialize the next again and again if it is a nullptr rather we are declaring it at once and we are accesing it when ever we want it
    //we can create multiple constructers of same name and different parameters
    public:

    node(int data2){
        data=data2;
        next=nullptr;
    }
};
int main(){
    vector <int> arr={5,6,7,8,9};
    //here we are creating a new constructor x which stores the memory address of the node by using new we can access the address of the pointer
    node* x=new node(arr[1],nullptr);
    node* z=new node(arr[2]);
    cout<<z->next;
    //here if we want to use data part of it then we have to use -> here as it is an object
    cout<<x->data<<endl;
//here it prints a random memory address
cout<<x<<endl;
//here it prints null
cout<<x->next<<endl;
//here we are creating a node y which stores the value of the one of the array elemnts
    node y=node(arr[3],nullptr);
    cout<<y.data;
    return 0;

}