
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>v;

    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Vector size is: "<<v.size()<<endl;
    cout<<"These are:"<<endl;

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    cout<<endl;
}