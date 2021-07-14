#include<iostream>
using namespace std;
int fun(int a,int b=0)
{
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<fun(a)<<endl;
    return 0;
}