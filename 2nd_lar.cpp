#include<iostream>
using namespace std;
int main(){
    int ar[100],i,lar1=0,lar2=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        if(ar[i]>lar1)
            lar1=ar[i];}
    for(i=0;i<n;i++){
        if((ar[i]>lar2) && (ar[i]<lar1))
            lar2=ar[i];
}
    cout<<"lar1 =  "<<lar1<<endl;
    cout<<"lar2 = "<<lar2<<endl;
}