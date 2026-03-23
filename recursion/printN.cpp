#include<iostream>
using namespace std;    
void print(int n){
   // base case//
    if( n==0){
        return ;
    }
    print(n-1); //recursive case//
    cout<<n<<endl;
}   
int main(){
    print(4);
}