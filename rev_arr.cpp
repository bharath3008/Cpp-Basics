#include<iostream>
using namespace std;
int main(){
    int arr1[10],i,j,n;
    cin>>n; //size of array
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=n-1;i>=0;i--){
        cout<<arr1[i]<<endl;
    }
    return 0;
}