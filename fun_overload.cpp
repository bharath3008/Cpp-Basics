#include<iostream>
using namespace std;
int fun(int a){
    return a;
}
int fun(int b,int c){
    return b*c;
}
char fun(char d){
    return d;
}
int main()
{
    int a,b,c;
    char d;
    cin>>a>>b>>c>>d;
    cout<<fun(a)<<endl;
    cout<<fun(b, c)<<endl;
    cout<<fun( d)<<endl;
    return 0;
}