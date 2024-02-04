#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
              

            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
       // if(array[i]>50)count++;
    }
    
    
    // cout<<"\n"<<count<<endl;

    int left=0,right=n-1,key;
    cin>>key;
    while(left<right){
        int mid=(left+right)/2;
        if(array[mid]==key){
            cout<<key<<" is "<<array[mid]<<" th index"<<endl;
            break;
        }
        else if(array[mid]<key){
            left=array[mid+1];
        }
        else right=array[mid-1];


    }
    if(left>right)cout<<"wrong"<<endl;

}