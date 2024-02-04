#include<bits/stdc++.h>
using namespace std;

//void coin()
int main(){
    int n;
    cin>>n;
    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    sort(coin,coin+n,greater<>());
    cout<<"After sorted:"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<coin[i]<<" ";
    }
    cout<<endl;

    int totall_bill,pay;
    cin>>totall_bill>>pay;
    int back=pay-totall_bill;
    for(int i=0;i<n;i++){
        if(coin[i]<back){
            back=back-coin[i];
            continue;
        }
        else if(back==2){
           cout<<"YES"<<endl;
            return 0;
        }
    }
     cout<<"NO"<<endl;
     
    
}