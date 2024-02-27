#include<bits/stdc++.h>
using namespace std;
class stud{
    //these are not specified as public so when an object is created of this class and wants to access these values it cannot
    //cannot be possible so it can be done by using get and set functions
    int id;
    string name;
    //we will make get and set attributes as public in order to access
    public:
    void set(int id1,string name1){
        id=id1;
        name=name1;
    }
    pair<int,string> get(){
        return make_pair(id,name);
    }

};
int main(){
    stud obj;
    obj.set(12,"pavan");
    pair<int,string> result=obj.get();
    cout<<"id is "<<result.first<<endl<<"name is "<<result.second;
    return 0;
}
