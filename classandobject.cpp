#include<bits/stdc++.h>
using namespace std;
//creating a class
class student
{
    //here we have to declare access specifier as public in order to make the object use the instance
    public:
    //data member
    string name;
    int id;
    //member funcions
    void print(){
        cout<<"name of the student is "<<name<<endl;
        cout<<"id of the student "<<name<<" is "<<id<<endl;
    }
};
//here we are creating another class
class car
{
    public:
    string name;
    int price;
    //member functions
    void printdata(){
        cout<<"name of the car is "<<name<<endl;
        cout<<"price of the car "<< name<<" is "<<price<<endl;

    }
};

int main(){
    //creating an object of class student
    student obj1;
    //creating an object of class car
    car obj2;
    obj1.name="pavan";
    obj1.id=69;
    obj1.print();
    obj2.name="pagani";
    obj2.price=456000000;
    obj2.printdata();
    return 0;
}