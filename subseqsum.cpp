#include<bits/stdc++.h>
using namespace std;

void loop(int ind,vector<int>&ds,int sum,int s,int n,int arr[]){
    if(ind==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
            
        }
        return;
    }
    ds.push_back(arr[ind]);
    s=s+arr[ind];

    loop(ind+1,ds,sum,s,n,arr);

    s=s-arr[ind];
    ds.pop_back();

    loop(ind+1,ds,sum,s,n,arr);


}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds;
    loop(0,ds,2,0,3,arr);
}