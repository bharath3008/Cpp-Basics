#include<iostream>
using namespace std;
int main(){
    int i,j,n,sum,pro;
    cin>>n;
    if(n%2==0){
        sum=0;
        for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    }
    else{
        j=1;
        pro=1;
        while(j!=n+1){
            pro=pro*j;
            j=j+1;
        }
        cout<<pro<<endl;
    }
}