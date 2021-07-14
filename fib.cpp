#include<iostream>
using namespace std;
int main(){
    int n,i,t1=0,t2=1,next;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}
    