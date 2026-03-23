#include<iostream>
using namespace std;    
int fact(int n){
   // base case//
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1); //recursive case//
}   
int main(){
    cout<<fact(5);
}