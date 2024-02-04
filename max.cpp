#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int array1[a],array2[b];

        for(int i=0;i<a;i++)cin>>array1[i];
        for(int j=0;j<b;j++)cin>>array2[j];
        
        for(int i=0;i<b;i++){
            array1[a+i]=array2[i];
            
        }
        
            sort(array1, array1+(a+b),greater<>());
        

/*      for(int i=0;i<a+b;i++){
        for(int j=i+1;j<a+b;j++){
            if(array1[i]<array1[j]){
                int temp=array1[j];             
                array1[j]=array1[i];
                array1[i]=temp;
              

            }
        }
    }
*/
        cout<<"\n";

        for(int i=0;i<a+b;i++){
            cout<<array1[i]<<" ";
        }


        
    }
    
    
}