#include<iostream>
using namespace std;    
int digitSum(int n){
    // base case//
    if( n==0){
        return 0;
    }
    return digitSum(n/10)+n%10; //recursive case//
  
}   
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digits: "<<digitSum(n)<<endl;
    return 0;
}
