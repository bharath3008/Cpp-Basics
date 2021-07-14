#include<iostream>
using namespace std;
int c_v(string s){
    int i=0,v=0;
    while(s[i]!='\0'){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            v++;}
        i++;    
    }
    return v;
}
int main(){
    string s;
    cin>>s;
    cout<< " No. of vowels =" <<c_v(s)<<endl;;
    return 0;
}