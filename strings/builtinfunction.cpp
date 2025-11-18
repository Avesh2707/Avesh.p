#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;
int main(){
    // string str = "avesh Agrahari is at home";
    // cout<<str.size();
    // cout<<endl<<str.length();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;


    // string s="avesh";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;


    // string str="Avesh";
    // cout<<str<<endl;
    // str="xyz" + str; //add
    // cout<<str<<endl;

    string s="abcdef"; // 0 1 2 3 4 5 
    cout<<s<<endl;
    // reverse(s.begin()+2,s.end()-1);
      reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;
}
