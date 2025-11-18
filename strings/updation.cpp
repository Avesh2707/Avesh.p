#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "avesh";
    cout<<str<<endl;
    // str[1]='u';
    // cout<<str;
    for(int i =0;str[i]!=0;i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str<<endl;
}