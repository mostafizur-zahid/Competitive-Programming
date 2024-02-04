  // Vector initial

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    vector<int> v; //vector is int datatype & variable is v

    v.push_back(2); //v[0]=2
    v.push_back(3); //v[1]=3
    v.push_back(5); //v[2]=5
    v.push_back(6); //v[3]=6

    v[2] = 10; // Now v[2]=10

    cout<<"Vector size is: ";
    cout<<v.size()<<endl;  // v.size() means size of vestor

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    //cout<<v[3]<<endl;
}
// vector slow than array
