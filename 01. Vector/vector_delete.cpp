#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,4,5,6};

    cout<<"Before delete the size of vector is: "<<v.size()<<endl;

    v.clear();

    cout<<"After delete the size is: "<<v.size()<<endl;
    cout<<"In Boolean: "<<v.empty()<<endl;      // For boolean if empty then show 1 other wish 0
}