#include<iostream>
#include<string>
using namespace std;
int main (){
//     string str = "Avesh is student at kiet";
//     cout<<str;


        string name ;
        // cin>>name; // only if string has no spaces 
        
        getline(cin,name); //VVIMP
        
        cout<<name;
        // cout<<endl<<name[0];  // indexing like array
}