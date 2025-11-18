#include<iostream>
using namespace std;
int main (){
    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl; // 4
    // *ptr++; // error

    (*ptr)++; //x=x+1

    // *ptr = *ptr+1;  // x=x+1
    cout<<*ptr<<endl; //5
}