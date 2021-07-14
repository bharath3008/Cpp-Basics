#include<iostream>
using namespace std;
int main(){
    int n,temp,res=0;
    cin>>n;
    temp=n;
    while(temp!=0){
        res=res+temp%10;
        temp=temp/10;
    }
    cout<<res<<endl;
}