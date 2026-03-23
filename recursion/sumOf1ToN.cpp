#include<iostream>
using namespace std;    
void sum1toN(int sum,int n){
    // base case//
    if( n==0){
        cout<<sum<<endl;
        return ;
    }
    sum1toN(sum+n,n-1); //recursive case//
  
}   
int sum2(int n){
    // base case//
    if( n==0){
        return 0;
    }
    return sum2(n-1)+n; //recursive case//
  
}
int main(){
    // sum1toN(0,4);
    cout<<sum2(4);
}