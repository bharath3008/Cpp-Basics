#include<iostream>
using namespace std;
string pali(string s){
    string final=" ";
    int i=0;
    int l=s.length();
    cout<<l;
    while(i<l-i-1){
            if(s[i]!=s[l-i-1])
                return "NO";
        i++;
    }
        return "YES";        
    return final;
}
int main(){
    string s;
    cin>>s;
    cout<<"YES - palindrome\nNO - Not a Palindrome \n"<<pali(s)<<endl;
    return 0;
}