#include<iostream>
using namespace std;    
int power(int a,int b){
    int p =1;
    for(int i=1;i<=b;i++){
        p = p*a;
    }
    return p;
}
int pow(int a,int b){
    // base case//
    if(b==0) return 1;
    
    return pow(a,b-1)*a; //recursive case//
}   

int main(){
    int a ;
    cout<<"Enter the base number : ";
    cin>>a; 
    int b ;
    cout<<"Enter the power number : ";  
    cin>>b;
    cout<<power(a,b)<<endl;
    cout<<pow(a,b)<<endl;
    return 0;
}