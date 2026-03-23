#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1)  return 1;
    int left = fib(n-1);
    int right = fib(n-2);
    return left+right;
}           
int main (){
    //1 1 2 3 5 8 13 21 34 55 89 144..
    cout<<fib(5)<<endl;
    return 0;
}